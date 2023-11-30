--------------------------------------------------------
--  Fichier créé - mercredi-novembre-01-2023   
--------------------------------------------------------
DROP TABLE "OUSSEMA"."EMPLOYE" cascade constraints;
--------------------------------------------------------
--  DDL for Table EMPLOYE
--------------------------------------------------------

  CREATE TABLE "OUSSEMA"."EMPLOYE" 
   (	"CIN" VARCHAR2(20 BYTE), 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"TEL" VARCHAR2(20 BYTE), 
	"STATUS" VARCHAR2(20 BYTE), 
	"SEXE" VARCHAR2(20 BYTE), 
	"DATE_NAISSANCE" DATE
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into OUSSEMA.EMPLOYE
SET DEFINE OFF;
Insert into OUSSEMA.EMPLOYE (CIN,NOM,PRENOM,TEL,STATUS,SEXE,DATE_NAISSANCE) values ('123','oussema','issaoui','123','Celibataire','homme',to_date('08-06-05','DD-MM-RR'));
--------------------------------------------------------
--  Constraints for Table EMPLOYE
--------------------------------------------------------

  ALTER TABLE "OUSSEMA"."EMPLOYE" MODIFY ("CIN" NOT NULL ENABLE);
