drop table meibo purge;
create table meibo(id number(3), name varchar2(20));

insert into meibo(id, name) values(30, '��c');
insert into meibo(id, name) values(40, '����');
insert into meibo(id, name) values(20, '�R�c');
insert into meibo(id, name) values(15, '�g�c');
insert into meibo(id, name) values(60, '���c');
commit;