package com.example.uesr.sheepclock;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.appwidget.AppWidgetManager;
import android.appwidget.AppWidgetProvider;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.PowerManager;
import android.widget.RemoteViews;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SheepClock extends AppWidgetProvider {
    public static final String URI_SCHEME = "SheepClock";

    public void onReceive(Context context, Intent intent) { // ブロードキャストインテントを受け取った際に呼ばれるメソッド
        if (AppWidgetManager.ACTION_APPWIDGET_DELETED.equals(intent.getAction())) // 利用者がウィジットを削除した場合
            deleteAlarm(context, intent); // deleteAlarm method の cancel method でアラームを削除
        else if (AppWidgetManager.ACTION_APPWIDGET_UPDATE.equals(intent.getAction())) {
            if (!URI_SCHEME.equals(intent.getScheme())) // 取得データのスキーマが一致しない場合
                setAlarm(context, intent); // setAlarm メソッドの実行
            else // それ以外の場合
                doProc(context, intent); // doProc メソッドの実行
        }
    }

    private void doProc(Context context, Intent intent) { // // 画面のON/OFFを検知するメソッド
        PowerManager pm = (PowerManager) context.getSystemService(context.POWER_SERVICE); //

        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.KITKAT_WATCH)
            if (!pm.isScreenOn()) return;
        else
            if (!pm.isInteractive()) return;

        int appWidgetId = intent.getIntExtra(AppWidgetManager.EXTRA_APPWIDGET_ID, AppWidgetManager.INVALID_APPWIDGET_ID);
        if (appWidgetId != AppWidgetManager.INVALID_APPWIDGET_ID) {
            AppWidgetManager manager = AppWidgetManager.getInstance(context);
            updateAppWidget(context, manager, appWidgetId);
        }
    }

    private void setAlarm(Context context, Intent intent) { // 複数のウィジェットが配置された場合の処理をするメソッド
        int intArr[] = intent.getExtras().getIntArray(AppWidgetManager.EXTRA_APPWIDGET_IDS);
        for (int appWidgetId : intArr) {
            long interval = 1;
            AlarmManager alarmManager = (AlarmManager) context.getSystemService(Context.ALARM_SERVICE); // AlarmManager インスタンス生成

            alarmManager.setRepeating(AlarmManager.RTC, System.currentTimeMillis(), interval * 1000, // 1秒毎に繰り返す処理
                    PendingIntent.getBroadcast(context, 0, buildAlarmIntent(context, appWidgetId), PendingIntent.FLAG_UPDATE_CURRENT));
        }
    }

    private Intent buildAlarmIntent(Context context, int appWidgetId) { // ブロードキャストへ送信するインテントを生成するメソッド
        Intent intent = new Intent(context, this.getClass());
        intent.setAction(AppWidgetManager.ACTION_APPWIDGET_UPDATE);
        intent.putExtra(AppWidgetManager.EXTRA_APPWIDGET_ID, appWidgetId); // ウィジェットIDの追加
        intent.setData(Uri.parse(URI_SCHEME + "://update/" + appWidgetId)); // URIの設定
        return intent;
    }

    private void deleteAlarm(Context context, Intent intent) { // アラームを停止させるメソッド
        int appWidgetId = intent.getIntExtra(AppWidgetManager.EXTRA_APPWIDGET_ID, AppWidgetManager.INVALID_APPWIDGET_ID);
        if (appWidgetId != AppWidgetManager.INVALID_APPWIDGET_ID) {
            AlarmManager alarmManager = (AlarmManager) context.getSystemService(Context.ALARM_SERVICE);
            alarmManager.cancel(PendingIntent.getBroadcast(context, 0, buildAlarmIntent(context, appWidgetId), PendingIntent.FLAG_UPDATE_CURRENT));
        }
    }

    static void updateAppWidget(Context context, AppWidgetManager appWidgetManager, int appWidgetId) { // ウィジェットの表示を更新するメソッド
        final int[] IMAGES = {
                R.drawable.zero,
                R.drawable.one,
                R.drawable.two,
                R.drawable.three,
                R.drawable.four,
                R.drawable.five,
                R.drawable.six,
                R.drawable.seven,
                R.drawable.eight,
                R.drawable.nine
        };

        final int[] VIEWS = {
                R.id.image0,
                R.id.image1,
                R.id.image2,
                R.id.image3
        };

        SimpleDateFormat sdf = new SimpleDateFormat("hhmm");
        String dateString = sdf.format(new Date());// 時刻の文字列を取得

        char ch[] = dateString.toCharArray(); // 配列に変換
        RemoteViews views = new RemoteViews(context.getPackageName(),
                R.layout.sheep_clock);
        for (int i = 0; i < ch.length; i++) {
            views.setImageViewResource(VIEWS[i], IMAGES[ch[i] - '0']);
        }
        views.setImageViewResource(R.id.imageColon, R.drawable.colon);
        appWidgetManager.updateAppWidget(appWidgetId, views); // 画面更新
    }
}

