/*
�y�v���O�����T�v�z
��ʏ�Ɏw�肳�ꂽ�L�[�̓��͂Ńn�����̉��K���r�[�v���ōĐ�������B
�܂��AESC�L�[�̓��͂Ńv���O�������I��������B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>
#include <windows.h>

int main(void)
{
	int key;

	printf("THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTTHTHTHTHTH\n");
	printf("�@�@�@�@�@�Q�Q�Q�Q�Q�Q\n");
	printf("�@�@�@�@�@�@�@ �_|�@�@�@�@(�Q�Q�Q\n");
	printf("�@�@�@�@��__ . | �_�@�@�@�@�@�@�M�R�A �߰��\n");
	printf("�@�@�@���L�@  �M�� �_�@�@�@�@�@�@�@ �_ �@�߰��\n");
	printf("�@�@�@i �(�i��ҁj� �@�_�@�@�@�@�@�@�@�r\n");
	printf(".�@�@�@٨! � ���ɨ!    �_�@�߰��    /\n");
	printf("�@�a�@/ ��|�P�P�P�P�P�P!�P�P�P�P�P�P�\n");
	printf("�@�a�i ���Q�Q�Q�Q�Q�Q��--�[�\�[r�[�L\n");
	printf("�@ �����t�t�@�a�@�@�@�@||�@�@�@ .||\n");
	printf("�@�a �@  �a. �a�j�@�@  ���@�@�@ .||\n");
	printf(".�@�@�@�@�@�@���@�@�@�@�@�@�@�@ .��\n");
	printf("THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTTHTHTHTHTH\n");
	printf("��      ��      ��      ��       ��      ��      ��      ��      ��\n");
	printf("��      ��      ��      ��       ��      ��      ��      ��      ��\n");
	printf("���h(s) ����(d) ���~(f) ���t�@(g)���\(h) ����(j) ���V(k) ���h(l) ��\n");
	printf("��------��------��------��-------��------��------��------��------��\n");

	printf("\n�E()���̃L�[�������Ɖ�����܂��B\n");
	printf("�E[ESC]�L�[�ŏI�����܂��B\n");


	_kbhit(); /* �W������(�L�[�{�[�h����)�f�[�^���o�b�t�@�[���őҋ@���� */

	while ((key = _getch()) != 0x1b) /* _getch()�Ŏ󂯎�����f�[�^��[ESC]�̏ꍇ�̓��[�v���I�������� */
	{
		switch (key)
		{
		case 's': Beep(523, 300); break;    /* �h�̉�(523Hz)��300ms�炷 */
		case 'd': Beep(587, 300); break;    /* ���̉�(587Hz)��300ms�炷 */
		case 'f': Beep(659, 300); break;    /* �~�̉�(659Hz)��300ms�炷 */
		case 'g': Beep(698, 300); break;    /* �t�@�̉�(698Hz)��300ms�炷 */
		case 'h': Beep(784, 300); break;    /* �\�̉�(784Hz)��300ms�炷 */
		case 'j': Beep(880, 300); break;    /* ���̉�(880Hz)��300ms�炷 */
		case 'k': Beep(988, 300); break;    /* �V�̉�(988Hz)��300ms�炷 */
		case 'l': Beep(1047, 300); break;   /* �h�̉�(1047Hz)��300ms�炷 */
		default: break;
		}
	}

	system("cls"); /* ��ʂ̕\�����N���A���� */

	return 0;
}