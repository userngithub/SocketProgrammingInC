
/***********************************************************************
** Client/Server - C Programming Language                	       *
** Tesina di Nestor Gutierrez V informatica serale                     *
** A.S. 2018 - Itis Molinari, Milano                                     *
***********************************************************************/

#include "conserweb.h"
typedef struct web_str str_web;


char dctype[] = "<!DOCTYPE html><html><head><style>";
int fun_bodcon(str_web webcon)
{
        write(webccon.web_client, dctype, sizeof(webcon.web_client) +30);

/* CSS style starts here */
        write(webcon.web_client, "body{font-size:19px;margin:0;padding:0;width:100%;}",51);
        write(webcon.web_client, "h1{font-size:30px;color:#666666;}",33);
        write(webcon.web_client, "#sfo{top:1px;margin-left:3%;margin-right:3%;padding:0;position:absolute;width:94%;}",83);
        write(webcon.web_client, "#top_hea{position:relative;width:100%;border:1px #999999 solid;border-radius:3px;}",82);
        write(webcon.web_client, "#anitop{width:40%;text-align:center;height:auto;background-color: transparent;position:relative;padding:3.35%;font-size:1.9vw;z-index:1000; -webkit-animation-name: ima; -webkit-animation-duration: 4s; -webkit-animation-iteration-count:infinite;animation-name:ima;animation-duration: 4s;animation-iteration-count: infinite;font-weight:bold;}",340);
        write(webcon.web_client,"@keyframes ima{0%{background-color:transparent;color:red;left:0;}25%{background-color:transparent;color:yellow;left:12.5%;}50%{background-color:transparent;color:#999999;left:25%;}75%{background-color:transparent;color:blue;left:37.5%;}100%{background-color:transparent;color:green;left:52%;}}",293);
        write(webcon.web_client, "#con{margin-top:7px;margin-left:3%;margin-right:3%;padding:1%;position:relative;width:94%;}",91);
        write(webcon.web_client, "#foo{font-size:1.3vw;margin-left:3%;margin-right:3%;position:fixed;width:94%;text-align:center;border:1px #999999 solid;border-radius:3px;bottom:1px;}",150);
	write(webcon.web_client, ".col{color:#666666;}",20);
/* Ends CSS style */

/* <body> starts here */
        write(webcon.web_client, "</style></head><body>",21);
        write(webcon.web_client, "<div id='sfo'>",14);

/* <header> starts here */
        write(webcon.web_client, "<div id='top_hea'>",18);
        write(webcon.web_client, "<div id='anitop'>",17);
        write(webcon.web_client, "Progetto per la Maturit&agrave;<br />di Nestor Gutierrez<br />",62);
        write(webcon.web_client, "</div>",6);
        write(webcon.web_client, "</div>",6);
/* Ends <header> */

/* Contents start here */
        write(webcon.web_client, "<div id='con'>",14);
        write(webcon.web_client, "<h1>Integrale indefinito</h1>",29);

/* JS source code starts here */
        write(webcon.web_client, "<br /><script>",14);
        write(webcon.web_client, "function valInt(form){",22);
        write(webcon.web_client, "var valInt = form.intg.value;",29);
        write(webcon.web_client, "var deVal = form.deri.value;",28);
        write(webcon.web_client, "var fchar = valInt.substring(0,1);",34);
        write(webcon.web_client, "var schar = valInt.substring(1,2);",34);
        write(webcon.web_client, "var tchar = valInt.substring(2,3);",34);
        write(webcon.web_client, "switch(valInt){",15);
        write(webcon.web_client, "case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':case'-1':case'-2':case'-3':case'-4':case'-5':case'-6':case'-7':case'-8':case'-9':",153);
	write(webcon.web_client, "if(fchar == '1'){form.deri.value = 'x';}",40);
        write(webcon.web_client, "else if((fchar >= '-9') || (fchar <= '9') && (fchar != '1')){form.deri.value = fchar + 'x';}",92);
        write(webcon.web_client, "case'x':",8);
        write(webcon.web_client, "if(fchar == 'x'){form.deri.value = '1/2(x^2)';}",47);
        write(webcon.web_client, "document.getElementById('retEse').innerHTML = '<hr />Risultato: &#x222b;' + valInt + ' dx = ' + form.deri.value + ' + c<br /><br />L&rsquo;integrale indefinito della funzione &#x222b;f(x) dx &egrave; l&rsquo;insieme delle primitive di F(x), cio&egrave; F(x) + c.<br />F(x),<br />F(x) + 1/2,<br />F(x) + 1<br />F(x) + 100<br />......n';",335);
        write(webcon.web_client, "break;",6);
        write(webcon.web_client, "default:",8);
        write(webcon.web_client, "document.getElementById('retEse').innerHTML = '<hr />Risultato: Prova di inserire un&lsquo;altra integrale indefinito!';",120);
        write(webcon.web_client, "}",1);
        write(webcon.web_client, "}",1);
        write(webcon.web_client, "</script>",9);
        write(webcon.web_client, "<form name='valForm' action='' method='GET'>",44);
        write(webcon.web_client, "&nbsp;&#x222b;&nbsp;<input type='text' id='intg' value='' style='padding-left:7px;'>dx&nbsp;&nbsp;",98);
        write(webcon.web_client, "<input type='button' name='traIntg' value=' invia => ' onclick='valInt(this.form)' style='cursor:pointer;border:0;padding:3px;' >",129);
        write(webcon.web_client, "&nbsp;D&nbsp;[<input type='text' id='deri' value='' style='padding-left:7px;' >&nbsp;+&nbsp;c]",94);
        write(webcon.web_client, "</form><br />",13);
        write(webcon.web_client, "<div id='retEse'></div><br />",29);
        write(webcon.web_client, "</div>",6);
        write(webcon.web_client, "</div>",6);
/* Ends JS source code */

/* <footer> starts here */
        write(webcon.web_client, "<div id='foo' class='col' >",27);
        write(webcon.web_client, "Nestor Gutierrez - Studente Molinari - <a href='mailto:info@besult.com' class='col' title='Webmaster Info'>Info</a>",115);
        write(webcon.web_client, "</div>",6);
/* Ends <footer> */

        write(webcon.web_client, "</body></html>",14);
/* Ends <body> */
        return(0);
}

