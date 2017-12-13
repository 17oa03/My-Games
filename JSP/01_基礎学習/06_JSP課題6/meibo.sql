drop table meibo purge;
create table meibo(id number(3), name varchar2(20));

insert into meibo(id, name) values(30, '上田');
insert into meibo(id, name) values(40, '小川');
insert into meibo(id, name) values(20, '山田');
insert into meibo(id, name) values(15, '吉田');
insert into meibo(id, name) values(60, '黒田');
commit;