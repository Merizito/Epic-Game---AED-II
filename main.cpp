#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <conio.h>


using namespace std;

struct TipoPersonagem
{
    char nome [6];
    int ouro;
    int vida;
    int mana;
    int item;
    char cabeca;
    char corpo;
    char braco_dir;
    char braco_esq;
    char perna_dir;
    char perna_esq;
    char arma_1;
    char arma_2;
    int resistencia;
    int dano1;
};


void Menu ()
{
    cout << "\n\t\t       xxxxxxxxxxx             xxxxxxxxxxxxxxxxxxx       xxxxxxxxxxxxxxx\n";
    cout << "\t\t      xxxxxxxxxxxxx            xxxxxxxxxxxxxxxxxxx       xxxxxxxxxxxxxxxx\n";
    cout << "\t\t     xxxxx      xxxxx          xx                        xx            xxxx\n";
    cout << "\t\t    xxxxx        xxxxx         xxxxxxxxx                 xx              xxx\n";
    cout << "\t\t   xxxxxxxxxxxxxxxxxxxx        xxxxxxxxx                 xx              xxx\n";
    cout << "\t\t  xxxxxxxxxxxxxxxxxxxxxx       xx                        xx            xxx\n";
    cout << "\t\t xxxxx              xxxxx      xxxxxxxxxxxxxxxxxxx       xxxxxxxxxxxxxxxx\n";
    cout << "\t\txxxx                xxxxxx     xxxxxxxxxxxxxxxxxxx       xxxxxxxxxxxxxxx\n";
    cout << "\n\n\t\t       Aventuras                 E                       Desastres\n\n";
    cout << "\t\t      ************************************************************\n";
    cout << "\t\t      **                                                        **\n";
    cout << "\t\t      **   1 -> Iniciar Epic Game - Aventuras E Desastres       **\n";
    cout << "\t\t      **                                                        **\n";
    cout << "\t\t      **   2 -> Desenvolvedores                                 **\n";
    cout << "\t\t      **                                                        **\n";
    cout << "\t\t      **   3 -> Arreguei, esse jogo e muito foda pra mim (SAIR) **\n";
    cout << "\t\t      **                                                        **\n";
    cout << "\t\t      ************************************************************\n";
}



 // Parte Grafica do Marlon

void fodas()
{
  cout <<      "FFFFFFFFFFFFFFFFFF  OOOOOOOOOOOOOOOOOOOOOO  DDDDDDDDDDDDDDD                 AAAAAAAAA                                            SSSSSSSSSSSSSSSSSS     EEEEEEEEEEEEEEEEEEEE\n";
  cout <<      "FFFFFFFFFFFFFFFFFF  OOOOOOOOOOOOOOOOOOOOOO  DDDDDDDDDDDDDDDDDDD            AAA     AAA                                          SSSSSSSSSSSSSSSSSSS     EEEEEEEEEEEEEEEEEEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDD          AAA       AAA                                        SS                       EEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDDD        AAA         AAA                                      SSSS                      EEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDDDD      AAA           AAA                                       SSSSSS                  EEEE\n";
  cout <<      "FFFFFFFFFFFFFFFFFF  OOO                OOO  D              DDDDDDDD    AAA             AAA                                       SSSSSSSSSS             EEEE\n";
  cout <<      "FFFFFFFFFFFFFFFFFF  OOO                OOO  D              DDDDDDDD   AAA               AAA                                             SSSSSSS         EEEEEEEEEEEEEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDDDD   AAA AAAAAAAAAAAAAAA AAA       ============                              SSSSSSS    EEEEEEEEEEEEEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDDD   AAA                   AAA      ============                                   SS    EEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDDD   AAA                     AAA                                                  SSSSSS  EEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDDD   AAA                       AAA                                                 SSSSS   EEEE\n";
  cout <<      "FFFFF               OOO                OOO  D              DDD   AAA                         AAA                                            SSSSSSSS    EEEE\n";
  cout <<      "FFFFF               OOOOOOOOOOOOOOOOOOOOOO  D              DD   AAA                           AAA                                      SSSSSSSSS        EEEEEEEEEEEEEEEEEEEEE\n";
  cout <<      "FFFFF               OOOOOOOOOOOOOOOOOOOOOO  DDDDDDDDDDDDDDDD   AAA                             AAA                             SSSSSSSSSSSSSSS          EEEEEEEEEEEEEEEEEEEEE\n";

    system("PAUSE");
    system("cls");
}

void nonopeia_manca()
{
    cout << "\t\t\t\t -> GAME OVER !!! <- \n\n\t\t\t\t JOVEM, RODOU BOY!!\n"



      "   ,,,,,,,,,,,,,,,,,,,,,  \   /          \n"
    "/ (  (  (  (  (  (  (  (  \( = =)   >>>>>>>>>>>>         o......\n"
   "<  (  (  (  (  (  (  (  (  ( ^ )       >>>>>>>>>>>>>>  /|...     \n"
    "\ (__(__(__(__(__(__(__(__)   ~     >>>>>>>>>>>>        /....... \n"
        " ^  ^  ^  ^  ^  ^  ^  ^  ^\n"

        "\t\t\t\t\n\n\n\nVOCE FOI MORTO PELO RAIO MORTAL DA NONOPEIA!\n\n";

    system("PAUSE");
    system("cls");
}

void caminhao_da_morte()
{
    cout << "\t\t\t\t -> GAME OVER !!! <- \n\n Um Caminhao passou por cima de voce\n";
    cout << "\t\t\t       ______________________________________________________\n"
            "t\t\t              |                                                      |\n"
            "\t\t\t /    |                                                      |\n"
            "\t\t\t/---,         |                                                      |\n"
       "\t\t\t-----# ==|    |                                                      |\n"
       "\t\t\t| :) # ==|    |                                                      |\n"
  "\t\t\t-----;----#   |______________________________________________________|       YO NO,              \n"
  "\t\t\t|)___()  ;#   |______====____   \___________________________________|        SINTO MIO          \n"
 "\t\t\t[_/,-,\;--;------ //,-,  ,-,\\\   |/             //,-,  ,-,  ,-,\\ __#          CUERPO!             \n"
 "\t\t\t  ( 0 )|===******||( 0 )( 0 )||-  o              ;( 0 )( 0 )( 0 )||               /\__\_o\n"
"\t\t\t----'-'--------------'-'--'-'-----------------------'-'--'-'--'-'--------------\n";

    system("PAUSE");
    system("cls");
}

void planeta()
{
    cout <<     "\t\t\t\t- >GAME OVER !! <- \n\n\t\t\t\t O MUNDO VIROU TORTA DE ABOBORA, JA ERA MAN, TRISTE NE? FAZER O QUE....\n\n"


                "oooo$$$$$$$$$$$$oooo\n"
            "oo$$$$$$$$$$$$$$$$$$$$$$$$o\n"
         "oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o\n"
       "o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o\n"
     "o$$$$$$          $$$$$$$          $$$$$$o\n"
    "o$$$$$$$$        $$$$$$$$$        $$$$$$$$$o\n"
   "$$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$\n"
 "$$$$$$$$$$$$$$    $$$$$$ $$$$$$    $$$$$$$$$$$$$$\n"
"o$$$$$$$$$$$$$$$ $$$$$$$   $$$$$$$ $$$$$$$$$$$$$$$\n"
"o$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$$$$$$\n"
"$$$$$$$$$$$$$$$$$$$$$$       $$$$$$$$$$$$$$$$$$$$$$\n"
"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "$$$\n"
"$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$\n"
 "$$$$    $$$$    $$$$$$$$$$$$$$$$$""  $$$$   o$$$\n"
  "$$$$o         $$$$  $$$$$   $$$          o$$$\n"
     "$$$$o   .     ""  """""   "       .  $$$""\n"
      "$$$$o $$$oo                   oo$$o$$$\n"
        "$$$$$$$$$    o$$$$   $$$$   $$$$$""\n"
          """$$$$$$ooo$$$$$ooo$$$$$$$$$""\n"
              "$$$$$$$$$$$$$$$$$$$$\n"
                      """$$$$""""\n";

    system("PAUSE");
    system("cls");
}


 void game_over()
{
    cout << "\n\t\t\t\t\t -> GAME OVER !!! <-";
    cout << "\n VOCE PERDEU MANO ,JA ERA\n";
    cout << "                                .....'',;;::cccllllllllllllcccc:::;;,,,''...'',, ..\n";
    cout << "                       .. ;cldkO00KXNNNNXXXKK000OOkkkkkxxxxxddoooddddddxxxxkkkkOO0XXKx:.\n";
    cout << "                 .':ok0KXXXNXK0kxolc:;;,,,,,,,,,,,;;,,,''''''',,''..              .'lOXKd'\n";
    cout << "            .,lx00Oxl:,'............''''''...................    ...,;;'.             .oKXd.\n";
    cout << "         .ckKKkc'...'',:::;,'.........'',;;::::;,'..........'',;;;,'.. .';;'.            kNKc.\n";
    cout << "      .:kXXk:.    ..       ..................          .............,:c:'...;:'.         .dNNx.\n";
    cout << "     :0NKd,          .....''',,,,''..               ',...........',,,'`,,::,...,,.        .dNNx.\n";
    cout << "    .xXd.         .:;'..         ..,'             .;,.               ...,,'';;`. ...       .oNNo\n";
    cout << "    .0K.         .;.              ;'              ';                      .'...'.           .oXX:\n";
    cout << "   .oNO.         .                 ,.              .     ..`,::ccc:;,..     ..                lXX:\n";
    cout << "  .dNX:               ......       ;.                `cxOKK0OXWWWWWWWNX0kc.                    :KXd.\n";
    cout << ".l0N0;             ;d0KKKKKXK0ko:...              .l0X0xc,...lXWWWWWWWWKO0Kx`                   ,ONKo.\n";
    cout << ".lKNKl...'......'. .dXWN0kkk0NWWWWWN0o.            :KN0;.  .,cokXWWNNNNWNKkxONK: .,:c:.      .`;;;;:lk0XXx;\n";
    cout << ":KN0l';ll:'.         .,:lodxxkO00KXNWWWX000k.       oXNx;:okKX0kdl:::;'',;coxkkd, ...'. ...'''.......,:lxKO:.\n";
    cout << "oNNk,;c,'',.                      ...;xNNOc,.         ,d0X0xc,.     .dOd,           ..;dOKXK00000Ox:.   ..''dKO,\n";
    cout << "'KW0,:,.,:..,oxkkkdl;'.                'KK'              ..           .dXX0o:'....,:oOXNN0d;.'. ..,lOKd.   .. ;KXl.\n";
    cout << ";XNd,;  ;. l00kxoooxKXKx:..ld:         ;KK`                             .:dkO000000Okxl;.   c0;      :KK;   .  ;XXc\n";
    cout << "'XXdc.  :. ..    '' 'kNNNKKKk,      .,dKNO.                                   ....       .'c0NO'      :X0.  ,.  xN0.\n";
    cout << ".kNOc'  ,.      .00. ..''...      .l0X0d;.             'dOkxo;...                    .;okKXK0KNXx;.   .0X:  ,.  lNX`\n";
    cout << ",KKdl  .c,    .dNK,            .;xXWKc.                .;:coOXO,,'.......       .,lx0XXOo;...oNWNXKk:.'KX;  `   dNX.\n";
    cout << ":XXkc'....  .dNWXl        .';l0NXNKl.          ,lxkkkxo' .cK0.          ..;lx0XNX0xc.     ,0Nx'.','.kXo  .,  ,KNx.\n";
    cout << " cXXd,,;:, .oXWNNKo'    .'..  .'.'dKk;        .cooollox;.xXXl     ..,cdOKXXX00NXc.      'oKWK'     ;k:  .l. ,0Nk.\n";
    cout << "  cXNx.  . ,KWX0NNNXOl'.           .o0Ooldk;            .:c;.':lxOKKK0xo:,.. ;XX:   .,lOXWWXd.      . . :,.lKXd.\n";
    cout << "  lXNo    cXWWWXooNWNXKko;'..       .lk0x;       ...,:ldk0KXNNOo:,..       ,OWNOxO0KXXNWNO,        ....'l0Xk,\n";
    cout << " .dNK.   oNWWNo.cXK;;oOXNNXK0kxdolllllooooddxk00KKKK0kdoc:c0No        .`ckXWWWNXkc,;kNKl.          .,kXXk,\n";
    cout << "  'KXc  .dNWWX;.xNk.  .kNO::lodxkOXWN0OkxdlcxNKl,..        oN0'..,:ox0XNWWNNWXo.  ,ONO ;           .o0Xk;\n";
    cout << "  .ONo    oNWWN0xXWK, .oNKc       .ONx.      ;X0.          .:XNKKNNWWWWNKkl;kNk. .cKXo.           .ON0;\n";
    cout << "  .xNd   cNWWWWWWWWKOkKNXxl:,'...;0Xo'.....'lXK;...',:lxk0KNWWWWNNKOd:..   lXKclON0:            .xNk.\n";
    cout << " .dXd   ;XWWWWWWWWWWWWWWWWWWNNNNNWWNNNNNNNNNWWNNNNNNWWWWWNXKNNk;..        .dNWWXd.             cXO.\n";
    cout << "  .xXo   .ONWNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNK0ko:'..OXo          'l0NXx,              :KK,\n";
    cout << " .OXc    :XNk0NWXKNWWWWWWWWWWWWWWWWWWWWWNNNX00NNx:'..       lXKc.     'lONN0l.              .oXK:\n";
    cout << "  .KX;    .dNKoON0;lXNkcld0NXo::cd0NNO:;,,'.. .0Xc            lXXo..'l0NNKd,.              .c0Nk,\n";
    cout << " :XK.     .xNX0NKc.cXXl  ;KXl    .dN0.       .0No            .xNXOKNXOo,.               .l0Xk;.\n";
    cout << " .dXk.      .lKWN0d::OWK;  lXXc    .OX:       .ONx.     . .,cdk0XNXOd;.   .'''....;c:'..;xKXx,\n";
    cout << " .0No         .:dOKNNNWNKOxkXWXo:,,;ONk;,,,,,;c0NXOxxkO0XXNXKOdc,.  ..;::,...;lol;..:xKXOl.\n";
    cout << " ,XX:             ..';cldxkOO0KKKXXXXXXXXXXKKKKK00Okxdol:;'..   .';::,..':llc,..´lkKXkc.\n";
    cout << " :NX'    .     ''            ..................             .,;:;,',;ccc;'..'lkKX0d;.\n";
    cout << " lNK.   .;      ,lc,.         ................        ..,,;;;;;;:::,....,lkKX0d:.\n";
    cout << ".oN0.    .'.      .;ccc;,'....              ....'',;;;;;;;;;;;..   .;oOXX0d:.\n";
    cout << ".dN0.      .;;,..       ....                ..''''''''....     .:dOKKko;.\n";
    cout << " lNK'         ..,;::;;,'.........................           .;d0X0kc;.\n";
    cout << " .xXO;                                                 .;oOK0x:.\n";
    cout << "  .cKKo.                                    .,:oxkkkxk0K0xc;.\n";
    cout << "   .oKKkc,.                         .;;cok0XNNNX0Oxoc,.\n";
    cout << "   .;d0XX0kdlc:;,,,',,,;;:clodkO0KK0Okdl:,'..\n";
    cout << "      .,coxO0KXXXXXXXKK0OOxdoc:,..\n";
    cout << "                  ...\n";
    system("PAUSE");
    system("cls");
}

void jogo_zerado()
{
   cout <<  "\n \t\t\t\t PARABENS VOCE ZEROU O JOGO !!!\n";
   cout <<  "              .+~                :xx++::\n";
   cout <<  "               :?. -          .!!X!~??!`~!~!. :-:.\n";
   cout <<  "              {             .!!!H :.~ ::+!~~!!!~ ?%X.\n";
   cout <<  "                            ~~!M!!>!!X?!!!!!!!!!!...!~.\n";
   cout <<  "                          {!:!MM!~:XM!!!!!!.:!..~ !.  `{\n";
   cout <<  "              {: `   :~ .:{~!!M!XXHM!!!X!XXHtMMHHHX!  ~ ~\n";
   cout <<  "            ~~~~{  ~!!!:!!!!!XM!!M!!!XHMMMRMSXXX!!!!!!:  {`\n";
   cout <<  "              `{  {::!!!!!X!X?M!!M!!XMMMMXXMMMM??!!!!!?!:~{\n";
   cout <<  "           :  ~~~{!!!XMMH!!XMXMXHHXXXXM!!!!MMMMSXXXX!!!!!!!~\n";
   cout <<  "        :    ::`~!!!MMMMXXXtMMMMMMMMMMMHX!!!!!!HMMMMMX!!!!!: ~\n";
   cout <<  "            ~:~!!!!!MMMMMMMMMMMMMMMMMMMMMMXXX!!!M??MMMM!!X!!i:\n";
   cout <<  "           {~{!!!!!XMMMMMMMMMMMM8M8MMMMM8MMMMMXX!!!!!!!!X!?t?!:\n";
   cout <<  "           ~:~~!!!!?MMMMMM@M@RMRRR$@@MMRMRMMMMMMXSX!!!XMMMX{?X!\n";
   cout <<  "         :XX {!!XHMMMM88MM88BR$M$$$$8@8RN88MMMMMMMMHXX?MMMMMX!!!\n";
   cout <<  "       .:X! {XMSM8M@@$$$$$$$$$$$$$$$$$$$B8R$8MMMMMMMMMMMMMMMMX!X\n";
   cout <<  "      :!?! !?XMMMMM8$$$$8$$$$$$$$$$$$$$BBR$$MMM@MMMMMMMMMMMMMM!!X\n";
   cout <<  "    ~{!!~ {!!XMMMB$$$$$$$$$$$$$$$$$$$$$$$$MMR$8MR$MMMMMMMMMMMMM!?!:\n";
   cout <<  "    :~~~ !:X!XMM8$$$$$$$$$$$$$$$$$$$$$$$RR$$MMMMR8NMMMMMMMMMMMMM{!`-\n";
   cout <<  "~:{!:~`~ :!:HMM8N$$$$$$$$$$$$$$$$$$$$$$$$$8MRMM8R$MRMMMMMMMMRMMMX!\n";
   cout << "!X!``~~   :~XM?SMM$B$$$$$$$$$$$$$$$$$$$$$$BR$$MMM$@R$M$MMMMMM$MMMMX?L\n";
   cout << " X~.      : `!!!MM#$RR$$$$$$$$$$$$$$$$$R$$$$$R$M$MMRRRM8MMMMMMM$$MMMM!?:\n";
   cout << "! ~ {~  !! !!~`` :!!MR$$$$$$$$$$RMM!?!??RR?#R8$M$MMMRM$RMMMM8MM$MMM!M!:>\n";
   cout << ": ' >!~ '!!  !   .!XMM8$$$$$@$$$R888HMM!!XXHWX$8$RM$MR5$8MMMMR$$@MMM!!!{ ~\n";
   cout << "!    !  ~!! :!:XXHXMMMR$$$$$$$$$$$$$$$$8$$$$8$$$MMR$M$$$MMMMMM$$$MMM!!!!\n";
   cout << " ~{!!!  !!! !!HMMMMMMMM$$$$$$$$$$$$$$$$$$$$$$$$$$MMM$M$$MM8MMMR$$MMXX!!!!/:`\n";
   cout << "  ~!!!  !!! !XMMMMMMMMMMR$$$$$$$$$$$$R$RRR$$$$$$$MMMM$RM$MM8MM$$$M8MMMX!!!!:\n";
   cout << "  !~ ~  !!~ XMMM%!!!XMMX?M$$$$$$$$B$MMSXXXH?MR$$8MMMM$$@$8$M$B$$$$B$MMMX!!!!\n";
   cout << "  ~!    !!  XMM?~~!!!MMMX!M$$$$$$MRMMM?!%MMMH!R$MMMMMM$$$MM$8$$$$$$MR@M!!!!!\n";
   cout << "  {>    !!  !Mf x@# ~!t?M~!$$$$$RMMM?Xb@!~`??MS$M@MMM@RMRMMM$$$$$$RMMMMM!!!!\n";
   cout << "  !     !~ {!!:!?M   !@!M{XM$$R5M$8MMM$! -XXXMMRMBMMM$RMMM@$R$BR$MMMMX??!X!!\n";
   cout << "!     !  !!X!!!?::xH!HM:MM$RM8M$RHMMMX...XMMMMM$RMMRRMMMMMMM8MMMMMMMMX!!X!\n";
   cout << "!     ~  !!?:::!!!MXMR~!MMMRMM8MMMMMS!!M?XXMMMMM$$M$M$RMMMM8$RMMMMMMMM%X!!\n";
   cout << "~     ~  !~~X!!XHMMM?~ XM$MMMMRMMMMMM@MMMMMMMMMM$8@MMMMMMMMRMMMMM?!MMM%HX!\n";
   cout << "        !!!!XSMMXXMM .MMMMMMMM$$$BB8MMM@MMMMMMMR$RMMMMMMMMMMMMMMMXX!?H!XX\n";
   cout << "        XHXMMMMMMMM!.XMMMMMMMMMR$$$8M$$$$$M@88MMMMMMMMMMMMMMM!XMMMXX!!!XM\n";
   cout << "   ~   {!MMMMMMMMRM:XMMMMMMMMMM8R$$$$$$$$$$$$$$$NMMMMMMMM?!MM!M8MXX!!/t!M\n";
   cout << "       ~HMMMMMMMMM~!MM8@8MMM!MM$$8$$$$$$$$$$$$$$8MMMMMMM!!XMMMM$8MR!MX!MM\n";
   cout << "       'MMMMMMMMMM'MM$$$$$MMXMXM$$$$$$$$$$$$$$$$RMMMMMMM!!MMM$$$$MMMMM{!M\n";
   cout << "       'MMMMMMMMM!'MM$$$$$RMMMMMM$$$$$$$$$$$$$$$MMM!MMMX!!MM$$$$$M$$M$M!M\n";
   cout << "        !MMMMMM$M! !MR$$$RMM8$8MXM8$$$$$$$$$$$$NMMM!MMM!!!?MRR$$RXM$$MR!M\n";
   cout << "        !M?XMM$$M.{ !MMMMMMSUSRMXM$8R$$$$$$$$$$#$MM!MMM!X!t8$M$MMMHMRMMX$\n";
   cout << " ,-,    !!!MM$RMSMX:.?!XMHRR$RM88$$$8M$$$$$R$$$$8MM!MMXMH!M$$RMMMMRNMMX!$\n";
   cout << "  -'`    '!!!MMMMMMMMMM8$RMM8MBMRRMR8RMMM$$$$8$8$$$MMXMMMMM!MR$MM!M?MMMMMM$\n";
   cout << "        XX!MMMMMMM@RMM$MM@$$BM$$$M8MMMMR$$$$@$$$$MM!MMMMXX$MRM!XH!!??XMMM\n";
   cout << "       `!!!M?MHMMM$RMMMR@$$$$MR@MMMM8MMMM$$$$$$$WMM!MMMM!M$RMM!!.MM!%M?~!\n";
   cout << "        !!!!!!MMMMBMM$$RRMMMR8MMMMMRMMMMM8$$$$$$$MM?MMMM!f#RM~    `~!!!~!\n";
   cout << "        ~!!HX!!~!?MM?MMM??MM?MMMMMMMMMRMMMM$$$$$MMM!MMMM!!\n";
   cout << "         !!!MX!:`~~`~~!~~!!!!XM!!!?!?MMMM8$$$$$MMMMXMMM!!\n";
   cout << "         !!~M@MX.. {!!X!!!!XHMHX!!``!XMMMB$MM$$B$M!MMM!!\n";
   cout << "         !!!?MRMM!:!XHMHMMMMMMMM!  X!SMMX$$MM$$$RMXMMM~\n";
   cout << "          !M!MMMM>!XMMMMMMMMXMM!!:!MM$MMMBRM$$$$8MMMM~\n";
   cout << "          `?H!M$R> MMMM?MMM!MM6!X!XM$$$MM$MM$$$$MX$f\n";
   cout << "           `MXM$8X MMMMMMM!!MM!!!!XM$$$MM$MM$$$RX@z\n";
   cout << "            ~M?$MM !MMMMXM!!MM!!!XMMM$$$8$XM$$RM!`\n";
   cout << "             !XMMM !MMMMXX!XM!!!HMMMM$$$$RH$$M!~\n";
   cout << "             'M?MM `?MMXMM!XM!XMMMMM$$$$$RM$$#\n";
   cout << "              `>MMk ~MMHM!XM!XMMM$$$$$$BRM$Mz\n";
   cout << "               ~`?M. !M?MXM!X$$@M$$$$$$RMM#\n";
   cout << "                 `!M  !!MM!X8$$$RM$$$$MM#`\n";
   cout << "                   !% `~~~X8$$$$8M$$RR#`\n";
   cout << "                    !!x:xH$$$$$$$R$R*`\n";
   cout << "                     ~!?MMMMRRRM@M#`\n";
   cout << "                      `~???MMM?MMM  \n";
   cout << "                          ``~~ww";
   system("PAUSE");
   system("cls");

}

void challenge ()
{
    cout << "\n\t\t\t\t -> CHALLENGE ACCEPTED <-\n";
    cout << "...................................................\n";
    cout << "........` ` ` ` ` ` ` ` ` _ __µr===4=un_…_`````` ``` ``` ``\n";
    cout << " ` ` ` ` ` ` ` `_#Fˆ¯… ` ` ` ``` `… ¯¯ ¾g…```````````\n";
    cout << "` ` ` ` ` `_sF¯ ` ` …____… ``` ``` ``` ``3v…` ``` ```\n";
    cout << "` ` ` ` _#¯ ` ` _sʹ4ˆ……¯...¯¯'' ›s_ ` ` ` `_un=u_h… ``` ``\n";
    cout << "` ` … #¯ ` ` ʹg=™4ˆˆ₫g₫ˆˆˆ77L ` … $=÷L_LLˆˆ'' ɷ ` ` `\n";
    cout << "` ` ʹ#… ` ` …¼Gu÷÷d8A÷÷4rg…`…ʹ$nuu…₫₫$ ¯¯''''E ` `\n";
    cout << "` `# ` ` ` ` …ʹ¾…````…`µrr'¯ ` ` ` ʹˆL…… ¯¯¯''''''''' ]½ `\n";
    cout << "` '# ` ` ` ` ` ` ` `¯¯¯'¯¯¯… ` ` ` ` ` ` `¯'' ==ɷu=™ ʹ$``\n";
    cout << "`'™ ` ` ` ` ` ` ` ` ` ` ` ` ` ` ``` ``` ``` ``` ``` ```'$\n";
    cout << "ʹ # ` ` ` ` ` ` ` ` ` `` ``` ``` ``` ``` ``… ` …ʹg```…$\n";
    cout << "ʹ'™ ` ` ` ` ` ` ` ` `` … ` ``` ```_µor4'''''™''# ` `$ ``` ₫`\n";
    cout << "ʹ [ ` ` ` ` ` ` ` ` ` ` `#```µµrFˆ… `` ```g™```````…$\n";
    cout << "`$ ` ` ` ` ` ` ` ` ` ` ` ` … ` ` ` ` ` ` `²™``````````₫`\n";
    cout << " …ʹ[ ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ``` ``` ``` ``` ``` …]…\n";
    cout << "` ʹʹL ` ` ` ` ` ` ` ` ` `` ``` ``` ``` ``` ``` ``` ``` #``\n";
    cout << "` …ʹL ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ``` ``` ``` ``ƒ… `\n";
    cout << " ` ` `''q… ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ʹgC````\n";
    cout << " ` ` ` `  G_ ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ``` ``` `µ… ` ` ``\n";
    cout << "` ` ` ` …¯4_ ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` … µr¯ ` ` ```\n";
    cout << " ` ` ` ` ` ` ` ¯4µ_ ` ` ` ` ` ` `… ` ` ` `_µ#…``````````\n";
    cout << "` ` ` ` ` ` ` ` …¯''''¾=____…_$µ_µs4š¯… ` ` ` ``` ```\n";
    cout << " ` ` ` ` ` ` ` ` ` ` ` ` ` … ` _#ˆr$``ˆ'''' ==_… ` ` ` ` ` `\n";
    cout << " ` ` ` ` ` ` ` ` ` ` ` ` ` `_ƒ^````b` ``` `… ¯ ¹_````` ``\n";
    cout << " ` ` ` ` ` ` ` ` ` ` ` ` `µ™ ``` `… E ` `…_µµgg₫\_ ` ` `\n";
    cout << "` ` ` ` ` ` ` ` ` ` ` `ƒ… ` ` …___µ$44F''¯¯¯` $ #… `` ``\n";
    cout << " ` ` ` ` ` ` ` ` ` ` …'F _µ=₫'$¯''¯¯ `$ ` ` ` ` ` … ` ` ` ` `\n";
    cout << " ` ` ` ` ` ` ` ` ` ` …ʹ'$''['´½ ` ` ` ` `$ ` ``` ``` ``` ```\n";
    cout << "` ` ` ` ` ` ` ` ` ` ` … ʹ¯ … ` ` ` ` `$ ` ` ` ` ``` ``` ```\n";
    cout << " ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` ` `$ ` ` ` ` ``` ``` ```\n";

    system("PAUSE");
    system("cls");
}

void presidio()
{
    cout << "\n\t\t\t\t\t -> GAME OVER !!! <-";
    cout << "\n\t\t\t Voce caiu no Presidio de NEVES\n\n";
    cout << "\t\t\t                 ~~~~~~~~~~.\n"
            "\t\t\t                | Presidio  )\n"
            "\t\t\t                |   de      )\n"
            "\t\t\t                | NEVES!!   )\n"
            "\t\t\t                |~~~~~~~~~~~)\n"
            "\t\t\t                |           |\n"
            "\t\t\t                |           |\n"
            "\t\t\t|\/\/\/\/\/\/\/\/\/\/\/\/\ /|\ /\/\/\/\/\/\/\/\/\/\/\/\/\|\n"
            "\t\t\t| ~~~~~~~~~~~~~~~~~~~~~~~~|---|~~~~~~~~~~~~~~~~~~~~~~~~  |\n"
            "\t\t\t|                        /-----\                         |\n"
            "\t\t\t|     ***************   |-------|    ***************     |\n"
            "\t\t\t|     ***************   |-------|    ***************     |\n"
            "\t\t\t|     ***************  /         \   ***************     |\n"
            "\t\t\t|     *************** |-----------|  ***************     |\n"
            "\t\t\t|                     |           |                      |\n"
            "\t\t\t|                     |-----------|                      |\n"
            "\t\t\t|_____________________            _______________________|\n"
            "\t\t\t                     /           /\n"
            "\t\t\t                    /           /\n"
            "\t\t\t                   /           /\n"
            "\t\t\t                  /           /\n"
            "\t\t\t                 /           /\n"
            "\t\t\t                .           .\n"
            "\t\t\t               .           .\n"
            "\t\t\t              .           .\n"
            "\t\t\t             .           .\n"
            "\t\t\t            |;;;;;;;;;;;|\n"
            "\t\t\t           |;;;;;;;;;;;|\n"
            "\t\t\t          |;;;;;;;;;;;|\n"
            "\t\t\t         |;;;;;;;;;;;|\n"
            "\t\t\t        |;;;;;;;;;;;|\n"
            "\t\t\t       |;;;;;;;;;;;|\n";

    system("PAUSE");
    system("cls");


}


void simba()
{
    cout << "\t\t\t   ,.\n"
            "\t\t\t      ,_> `.   ,';\n"
            "\t\t\t  ,-`'      `'   '`'._\n"
           "\t\t\t,,-) ---._   |   .---''`-),.\n"
         "\t\t\t,'      `.  \  ;  /   _,'     `,\n"
      "\t\t\t,--' ____       \   '  ,;    ___  `-,\n"
     "\t\t\t_>   /--. `-.              .-;.--\   \__\n"
    "\t\t\t-,  (    `.  `.,`~ \~ -. ,  ,     )    _\"\n"
  "\t\t\t  ;_<    \     \ ,   ) )   `. /     /    <,.\n"
 "\t\t\t,-'   _,  \    ,'    ( /      `.    /        `-,\n"
 "\t\t\t`-.,-'     `.,'       `         `.,'  `\    ,-'\n"
 "\t\t\t ,;       _  /   ,,,      ,,,     \     `-. `-._\n"
 "\t\t\t/-,     ,;  ;   ' _ \    / _ `     ; `.     `(`-\"\n"
  "\t\t\t/-,        ;    (o)      (o)      ;          `;`,\n"
"\t\t\t,~-;  ,-;    \     ;        `      /     \      <_\n"
"\t\t\t/-. ,'        \                   /       \     ,-;\n"
"\t\t\t  '`,     ,'   `-/             \-' `.      `-. <\n"
"\t\t\t   /_    /      /   (_     _)   \    \          `,\n"
"\t\t\t     `-._;  ,; |  .::.`-.-; :..  |       `-.    _\"\n"
"\t\t\t       _/       \  `:: ,^. :.:; / `.        \,-;\n"
 "\t\t\t    ;`.   ,-'  /`-..-'-.-`-..-'\            `-.\n"
 "\t\t\t      >_ /     ;  (\/( ' )\/)  ;     `-.    _<\n"
 "\t\t\t      ,-'      `.  \`-^^^-'/  ,'        \ _<\n"
 "\t\t\t       `-,  ,'   `. `"""""" ,    `-.   <`'\n"
 "\t\t\t         ')        `._.,,_.'        \ ,-;\n"
 "\t\t\t          '._        '`'`'   \       <\n"
 "\t\t\t             >   ,'       ,   `-.   <`'\n"
 "\t\t\t              `,/          \      ,-`\n"
 "\t\t\t               `,   ,; |   /     /\n"
 "\t\t\t                ;; /   ;        (\n"
 "\t\t\t                 _)|   `       (\n"
 "\t\t\t                 `')         .-'\n"
 "\t\t\t                   <_   \   /    \n"
 "\t\t\t                     \   /\(\n"
 "\t\t\t                      `;/  `\n";

 system("PAUSE");
 system("cls");
}


// Fim Parte grafica do Marlon



void mostra_Heroi (TipoPersonagem Heroi)
{
    printf("\t %s\n\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Heroi.perna_esq,Heroi.perna_dir);

}


void Menu_Status (TipoPersonagem Heroi)
{
    printf(" ***************\n");
    printf(" *  Vida: %d   *\n",Heroi.vida);
    printf(" *             *\n");
    printf(" *  Mana: %d   *\n",Heroi.mana);
    printf(" *             *\n");
    printf(" *  Ouro: %d    *\n",Heroi.ouro);
    printf(" *             *\n");
    printf(" *  Item: %d    *\n",Heroi.item);
    printf(" ***************\n");

}

int Menu_batalha ()
{
    int op;

    cout << "\t\t\t\t\t *****************\n";
    cout << "\t\t\t\t\t **  1->Atacar  **\n";
    cout << "\t\t\t\t\t **             **\n";
    cout << "\t\t\t\t\t **  2->Magia   **\n";
    cout << "\t\t\t\t\t **             **\n";
    cout << "\t\t\t\t\t **  3->Item    **\n";
    cout << "\t\t\t\t\t *****************\n";

    scanf("%d",&op);
    return op;
}

int  escolha (char *escolha1 , char *escolha2)
{
    int op;

    printf("\n\t|------------------------|     |------------------------| \n");
    printf("\t|  %s       \t%s \n",escolha1,escolha2);
    printf("\t|________________________|     |________________________|\n");
    printf("\t         |   |                            |   |   \n");
    printf("\t         |   |                            |   |   \n");
    printf("\t         |   |                            |   |   \n");
    printf("\t         |___|                            |___|    \n");

    printf("\n Por qual caminho voce seguira ?:\n");

    scanf("%d",&op);
    return op;

}

void Historia1(TipoPersonagem Heroi)
{
    cout << "\n Voce andava pelos Jardins de Salamandra...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou um inimigo!!!\n\n");
    system("PAUSE");
    system("cls");

}

void modo_batalha1 (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t %c  %c\n\n",Heroi.nome,"VS",Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%15;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 10 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }

        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
}

void Historia2(TipoPersonagem Heroi)
{
    cout << "\n Voce andava entre o mar que Moises abriu...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou dois caminhos!!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia3(TipoPersonagem Heroi)
{
    cout << "\n Voce andava entre a savana do reino de Simba...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou uma Loja !!!\n\n");
    system("PAUSE");
    system("cls");

}

void Loja ()
{
    cout << "\t\t\t\t\t_________________/---------------------\_________________\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx      ->  LOJA   <-   xxxxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|----------------------|xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|           |          |xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|           |          |xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx| O         |        O |xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|           |          |xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|           |          |xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxx|______________________|xxxxxxxxxxxxxxxx|\n";
    cout << "\t\t\t\t\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";

    system("PAUSE");

}

void Menu_loja(TipoPersonagem &Heroi)
{
    int op;
do
{
    system("cls");
    cout << "\t\t\t\t\t *********************************\n";
    cout << "\t\t\t\t\t * 1- Item              (15 Ouro)*\n";
    cout << "\t\t\t\t\t * 2- Elmo de prot.     (5 Ouro) *\n";
    cout << "\t\t\t\t\t * 3- Armadura de prot. (30 Ouro)*\n";
    cout << "\t\t\t\t\t * 4- Espada dupla      (50 Ouro)*\n";
    cout << "\t\t\t\t\t * 5- Arco e flecha     (20 Ouro)*\n";
    cout << "\t\t\t\t\t * 6- Escudo            (50 Ouro)*\n";
    cout << "\t\t\t\t\t * 7- Super Musculos   (100 Ouro)*\n";
    cout << "\t\t\t\t\t * 8- Super Sayadin    (300 Ouro)*\n";
    cout << "\t\t\t\t\t * 0- Estou pobre, vou sair      *\n";
    cout << "\t\t\t\t\t *********************************\n\n";
    cout << "\n\n";
    printf(" ***************\n");
    printf(" *  Vida: %d   *\n",Heroi.vida);
    printf(" *             *\n");
    printf(" *  Mana: %d   *\n",Heroi.mana);
    printf(" *             *\n");
    printf(" *  Ouro: %d    *\n",Heroi.ouro);
    printf(" *             *\n");
    printf(" *  Item: %d    *\n",Heroi.item);
    printf(" ***************\n");

    scanf("%d",&op);
    if(op == 1)
    {
        if(Heroi.ouro >=15)
        {
            Heroi.ouro = Heroi.ouro - 15;
            Heroi.item = Heroi.item + 1;
            printf("\n Voce comprou um Item com sucesso\n");
            printf("\n Item +1\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

    if(op == 2)
    {
        if(Heroi.ouro >=10)
        {
            Heroi.ouro = Heroi.ouro - 5;
            Heroi.resistencia = Heroi.resistencia + 5;
            Heroi.cabeca = 223;
            printf("\n Voce comprou um Elmo com sucesso\n");
            printf("\n Resistencia +5\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 3)
    {
        if(Heroi.ouro >=30)
        {
            Heroi.ouro = Heroi.ouro - 30;
            Heroi.resistencia = Heroi.resistencia + 15;
            Heroi.corpo = 186;
            printf("\n Voce comprou uma Armadura com sucesso\n");
            printf("\n Resistencia +15\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 4)
    {
        if(Heroi.ouro >= 50)
        {
            Heroi.ouro = Heroi.ouro - 50;
            Heroi.dano1 = Heroi.dano1 + 25;
            Heroi.arma_1 = 186;
            printf("\n Voce comprou uma Espada Dupla com sucesso\n");
            printf("\n Dano +25\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 5)
    {
        if(Heroi.ouro >= 20)
        {
            Heroi.ouro = Heroi.ouro - 20;
            Heroi.dano1 = Heroi.dano1 + 10;
            Heroi.arma_1 = 125;
            printf("\n Voce comprou um Arco e Flecha com sucesso\n");
            printf("\n Dano +10\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 6)
    {
        if(Heroi.ouro >=50)
        {
            Heroi.ouro = Heroi.ouro - 50;
            Heroi.resistencia = Heroi.resistencia + 25;
            Heroi.arma_2 = 204;
            printf("\n Voce comprou um Escudo com sucesso\n");
            printf("\n Resistencia +25\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 7)
    {
        if(Heroi.ouro >= 100)
        {
            Heroi.ouro = Heroi.ouro - 100;
            Heroi.dano1 = Heroi.dano1 + 20;
            Heroi.resistencia = Heroi.resistencia + 20;
            Heroi.braco_dir = 188;
            Heroi.braco_esq = 200;
            printf("\n Voce comprou Super Musculos com sucesso\n");
            printf("\n Resistencia +20\nDano +20\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

        if(op == 8)
    {
        if(Heroi.ouro >= 300)
        {
            Heroi.ouro = Heroi.ouro - 300;
            Heroi.cabeca = 190;
            Heroi.corpo = 219;
            Heroi.dano1 = Heroi.dano1 +50;
            Heroi.resistencia = Heroi.resistencia + 40;
            printf("\n Voce agora e um Super Sayadin ! ! !\n");
            printf("\n Resistencia +40\nDano +50\n\n");
        }
        else
        {
            printf("\n Dinheiro Insuficiente !\n");

        }
        system("PAUSE");
    }

}while(op != 0);
    printf("\nVolte sempre !\n\n");
    system("PAUSE");
    system("cls");
}

void Historia4(TipoPersonagem Heroi)
{
    cout << "\n Voce andava Pela savana do reino de Simba...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou um Inimigo !!!\n\n");
    system("PAUSE");
    system("cls");

}


void modo_batalha2 (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%20;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 10 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
}


void Historia5(TipoPersonagem Heroi)
{
    cout << "\n Voce chegava na caverna imperial de Simba...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que o professor sequestrou ele !!!\n\n");
    system("PAUSE");
    system("cls");

}

void modo_batalha_Julio (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Julio diz: Pessoal quem ficar mexendo no celular infelizmente nao vai passar...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%40;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 10 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n");
            printf("\n JULIO TE REPROVOU, BABACA!\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
}

void Historia6(TipoPersonagem Heroi)
{
    cout << "\n Voce caminhava solitariamente por Ribeirao das Neves...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que surgiu um funkeiro querendo te assaltar!!!\n\n");
    system("PAUSE");
    system("cls");
}

void evoloiu (TipoPersonagem Heroi)
 {
        printf("\n Voce Evoloiu ! :)\n");
        printf("\n Vida: + 20\n");
        printf(" Mana: + 20\n");
        printf(" Resistencia: + 5\n");
        printf(" Dano: + 5\n\n");

        Heroi.vida = Heroi.vida +20;
        Heroi.mana = Heroi.mana +20;
        Heroi.resistencia = Heroi.resistencia + 5;
        Heroi.dano1 = Heroi.dano1 +5;

        system("PAUSE");
        system("cls");
 }

void modo_batalha3 (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Funkeiro diz: Perdeu troxao, perdeu...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%30;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}

void Historia7(TipoPersonagem Heroi)
{
    cout << "\n Voce continuava andando tristemente por neves ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que surgiu dois caminhos!!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia8(TipoPersonagem Heroi)
{
    cout << "\n Voce caiu em um dos varios buracos de Ribeirao das Neves ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nCaiu tao fundo que chegou até Antlatida das vacas, e la encontrou outra loja!!!\n\n");
    system("PAUSE");
    system("cls");

}


void modo_batalha_Vaca (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Vaca geme: MUUUUUUUUUUUH...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%60;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}


void Historia9(TipoPersonagem Heroi)
{
    cout << "\n Voce caminha pelo local desconhecido ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nE nao encontra nada...\n\n");
    system("PAUSE");
    system("cls");

}

void Historia10(TipoPersonagem Heroi)
{
    cout << "\n Voce continua caminhando pelo local desconhecido ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nE nao encontra nada...\n\n");
    system("PAUSE");
    system("cls");

}

void Historia11(TipoPersonagem Heroi)
{
    cout << "\n Voce continua caminhando pelo local desconhecido ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nE avista a longe o que parece ser duas placas!!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia12(TipoPersonagem Heroi)
{
    cout << "\n Voce estava cansado de andar e parou para tirar um mijao ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que uma voz suave e doce ecoou em sua cabeca !!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia11_alt(TipoPersonagem Heroi)
{
    cout << "\n Voce continua caminhando pelo local desconhecido ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nE avista a longe uma vila cheia de mulheres gatas !!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia13(TipoPersonagem Heroi)
{
    cout << "\n Entao voce comecou a correr para resgatar a princesa do Ki ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou uma loja !!!\n\n");
    system("PAUSE");
    system("cls");

}

void Historia14(TipoPersonagem Heroi)
{
    cout << "\n Entao voce comecou a correr para resgatar a princesa do Ki ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou um Inimigo !!!\n\n");
    system("PAUSE");
    system("cls");

}

void modo_batalha4 (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Transformers diz: Eu sou Optimus Prime...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%60;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}

void modo_batalha5 (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Sem Forma diz: Eu sou Optimus Prime...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%80;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}

void Historia15(TipoPersonagem Heroi)
{
    cout << "\n Entao voce sentiu a presenca se um Ki enorme a sua frente ...\n\n";
    printf("\t %s\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t";
    printf("\t %s\n\t\t  %c\n\t\t%c%c%c%c%c\n\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t";
    printf("\t %s\n\t\t\t  %c\n\t\t\t%c%c%c%c%c\n\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t";
    printf("\t %s\n\t\t\t\t  %c\n\t\t\t\t%c%c%c%c%c\n\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t  %c\n\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    cout << "\n\t\t\t\t\t";
    printf("\t %s\n\t\t\t\t\t\t  %c\n\t\t\t\t\t\t%c%c%c%c%c\n\t\t\t\t\t\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,',',Heroi.arma_1,Heroi.perna_esq,',');
    system("PAUSE");
    printf("\n\nAte que voce encontrou uma indicacao !!!\n\n");
    system("PAUSE");
    system("cls");

}

void modo_batalha_Calopsita (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"Calopsita: Eu sou Optimus Prime...",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%20;
        dano_recebido = rand()%100;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}

void modo_batalha_Supremo (TipoPersonagem &Heroi,TipoPersonagem Inimigo)
{
    int dano = 0;
    int dano_recebido = 0;
    int acao = 0;

    printf("\n\t\t\t\t ! ! ! MODO BATALHA ! ! ! \n\n");
    printf("\t %s\t %s\t %s\t%s\n\t  %c\t\t   %c\n\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,"VS",Inimigo.nome,"EU SOU ALFA E OMEGA, VOCE DESVIOU SEU DESTINO , O BARRO E O QUE TE ESPERA",Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);

    do
    {
        printf("\n\n");
        system("PAUSE");
        system("cls");

        srand(time(NULL));
        dano = rand()%2000;
        dano_recebido = rand()%1200;

        acao = Menu_batalha();

        if(acao == 1)
        {
            printf("\t\t %s\t\t %s\n\t\t  %c\t\t   %c\n\t\t%c%c%c%c%c\t\t %c%c%c%c%c\n\t\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
            Inimigo.vida = Inimigo.vida - (Heroi.dano1 + dano);
            printf("\n\t\t\t\t Dano: %d + %d\n",Heroi.dano1,dano);

        }
        if(acao == 2)
        {
            if(Heroi.mana >= 15)
            {
                printf("\t %s\t\t %s\n\t  %c\t\t   %c\n\t%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t %c %c\t\t  %c %c\n\n",Heroi.nome,Inimigo.nome,Heroi.cabeca,Inimigo.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,175,175,175,175,175,175,175,175,175,175,175,Heroi.arma_1,Inimigo.arma_2,Inimigo.braco_esq,Inimigo.corpo,Inimigo.braco_dir,Inimigo.arma_1,Heroi.perna_esq,Heroi.perna_dir,Inimigo.perna_esq,Inimigo.perna_dir);
                Inimigo.vida = Inimigo.vida - (Heroi.dano1 + 10 + dano);
                Heroi.mana = Heroi.mana - 15;
                printf("\n\t\t\t\t Dano: %d + 5 + %d\n",Heroi.dano1,dano);
            }
            else
            {
                printf("\nSEM MANA!\n");
                system("PAUSE");
            }
        }
        if(acao == 3)
        {
            if(Heroi.item > 0)
            {
                Heroi.item = Heroi.item - 1;
                Heroi.mana = Heroi.mana +10;
                Heroi.vida = Heroi.vida + 30;
                printf("\n\t\t\t\t Vida: +30\n");
                printf("\t\t\t\t Mana: +10\n\n");
                system("PAUSE");
            }
            else
            {
                printf("\nSEM ITEM!\n");
                system("PAUSE");
            }
        }

        if (Inimigo.vida > 0)
        {
                Heroi.vida = Heroi.vida - (dano_recebido - Heroi.resistencia);
                printf("\n\t\t\t\t Dano Recebido: %d - %d\n",dano_recebido,Heroi.resistencia);
        }

        if((acao != 1) &&(acao != 2) &&(acao != 3))
        {
            printf("\nOpcao invalida,voce nao atacou !\n");
        }

        if((Inimigo.vida <= 0) && (Heroi.vida > 0 ))
        {
            printf("\n VITORIA !\n");
            printf("\n Voce ganhou %d ouros\n\n",Inimigo.ouro);
            Heroi.ouro = Heroi.ouro + Inimigo.ouro;
            system("PAUSE");
            return;
        }
        if((Inimigo.vida >= 0) && (Heroi.vida <=0))
        {
            printf("\n DERROTA !\n\n");
            system("PAUSE");
            system("cls");
            printf("\n\n\n\t\t\t\t ! ! ! GAME OVER ! ! !\n\n");
            system("PAUSE");
            return;
        }

    }while((Inimigo.vida > 0) || (Heroi.vida > 0));
    system("cls");
}


void evoloiu_2 (TipoPersonagem Heroi)
 {
        printf("\n Voce Evoloiu Supremamente! :)\n");
        printf("\n Vida: + 5000\n");
        printf(" Mana: + 5000\n");
        printf(" Resistencia: + 500\n");
        printf(" Dano: + 500\n\n");

        Heroi.vida = Heroi.vida +5000;
        Heroi.mana = Heroi.mana +5000;
        Heroi.resistencia = Heroi.resistencia + 500;
        Heroi.dano1 = Heroi.dano1 +500;

        system("PAUSE");
        system("cls");
 }

int main()
{
    fflush(stdin);
    int op_do_menu;
    int caminho;
    int op = 0;
    int cont = 0;

    srand(time(NULL));

    Menu();
    scanf("%d",&op_do_menu);
    system("cls");

    switch(op_do_menu)
    {
    case 1:
        TipoPersonagem Heroi;
        cout << "\n\n\tCaro Usuario, nesta jornada voce sera criado como um guerreiro que surgiu inesperadamento do barro dos jardins\n\tde Salamandra, logo apos dos cachos do cabelo da princesa do ki cairem no solo.\n\tA princesa do ki foi sequestrada pelo principe dos Sayadins Calopsita que planeja roubar o ki dela para se tornar o mais\n\tforte do universo.\n\tSeu objetivo voce escolhera, suas acoes determinarao o futuro da humanidade e do universo !\n\n\tBoa Jornada :)\n\n\n";
        system("PAUSE");
        system("cls");
        cout << "Guerreiro do Barro qual o seu nome ?:";
        fflush(stdin);
        scanf("%s",&Heroi.nome);
        Heroi.cabeca = 229;
        Heroi.corpo = '|';
        Heroi.braco_dir = 92;
        Heroi.braco_esq = '/';
        Heroi.perna_dir = 92;
        Heroi.perna_esq = '/';
        Heroi.item = 1;
        Heroi.mana = 50;
        Heroi.vida = 50;
        Heroi.arma_1 = ' ';
        Heroi.arma_2 = ' ';
        Heroi.ouro = 0;
        Heroi.dano1 = 0;
        Heroi.resistencia = 0;

        cout << "\nGuerreiro do Barro voce foi Criado pelo Mestre Desenvolvedor do Jogo:\n\n\n";

        printf("\t %s\n\n\t  %c\n\t%c%c%c%c%c\n\t %c %c\n\n",Heroi.nome,Heroi.cabeca,Heroi.arma_2,Heroi.braco_esq,Heroi.corpo,Heroi.braco_dir,Heroi.arma_1,Heroi.perna_esq,Heroi.perna_dir);
        printf("\n");
        Menu_Status(Heroi);
        system("PAUSE");
        system("cls");

        Historia1(Heroi);

        TipoPersonagem Inimigo_lv1;
        strcpy(Inimigo_lv1.nome,"Cobra");
        Inimigo_lv1.vida = 20;
        Inimigo_lv1.mana = 0;
        Inimigo_lv1.ouro = 10;
        Inimigo_lv1.cabeca = 170;
        Inimigo_lv1.corpo = '|';
        Inimigo_lv1.braco_dir = ' ';
        Inimigo_lv1.braco_esq = ' ';
        Inimigo_lv1.perna_dir = '_';
        Inimigo_lv1.perna_esq = ' ';
        Inimigo_lv1.arma_1 = ' ';
        Inimigo_lv1.arma_2 = ' ';

        modo_batalha1(Heroi,Inimigo_lv1);
        if(Heroi.vida <= 0)
        {
            game_over();
            return 0;
        }

        system("cls");
        printf("\n\t\t\t! ! ! FIM DE BATALHA ! ! !\n\n");
        mostra_Heroi(Heroi);
        Menu_Status(Heroi);
        printf("\n\n");
        system("PAUSE");
        system("cls");

        Historia2(Heroi);

        caminho = escolha("1- Gruta do Kalango","2- Encontro com Simba");
        system("cls");
        if(caminho == 1)
        {
            cout << "\n\t\t\t\t -> UM METEORO GIGANTE CAIU EM VOCE <-\n\n\n";
            cout << "\t        | | | | | | | | | | | | | | | | | |\n";
            cout << "\t        | | | | | | | | | | | | | | | | | |\n";
            cout << "\t        | | | | | | | | | | | | | | | | | |\n";
            cout << "\t        | | | | | | | | | | | | | | | | | |\n";
            cout << "\t        | | | | | | | | | | | | | | | | | |\n";
            cout << "\t        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx| |\n";
            cout << "\t       xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx |\n";
            cout << "\t      xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|\n";
            cout << "\t     xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t   xxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t    xxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout << "\t      xxxxxxxxxxxxxxxxxxxxxxx\n";

            mostra_Heroi(Heroi);
            system("PAUSE");
            system("cls");
            printf("\n\t\t\t\t\t ! ! ! GAME OVER ! ! !\n");
            return 0;
        }

        if(caminho == 2)
        {
            Historia3(Heroi);
            Loja();
            printf("\n\n");
            Menu_loja(Heroi);
            system("cls");

            Historia4(Heroi);
            TipoPersonagem Inimigo_lv2;
            Inimigo_lv2.vida = 40;
            Inimigo_lv2.mana = 0;
            Inimigo_lv2.ouro = 15;
            Inimigo_lv2.cabeca = 237;
            Inimigo_lv2.corpo = '|';
            Inimigo_lv2.arma_2 = 123;
            Inimigo_lv2.braco_esq = '/';
            Inimigo_lv2.braco_dir = 92;
            Inimigo_lv2.arma_1 = ' ';
            Inimigo_lv2.perna_esq = '/';
            Inimigo_lv2.perna_dir = 92;
            strcpy(Inimigo_lv2.nome,"cacador");

            do
            {
            modo_batalha2(Heroi,Inimigo_lv2);
            cont++;
            system("cls");

            if(Heroi.vida <=0)
            {
                game_over();
                return 0;
            }
            printf("\n");
            printf("\n\t\t\t! ! ! FIM DE BATALHA ! ! !\n\n");
            mostra_Heroi(Heroi);
            printf("\n");
            Menu_Status(Heroi);
            printf("\n Deseja continuar batalhando ?\n\n1- Sim     2- Nao:");
            scanf("%d",&op);
            system("cls");
            printf("\n");

            if ((cont == 3) || (cont == 4))
            {
               evoloiu(Heroi);
            }

            }while(op == 1);

            Historia5(Heroi);
            caminho = escolha("1-lutar vs professor"," 2-sair correndo");
            system("cls");

            Loja();
            Menu_loja(Heroi);
            system("cls");

            if (caminho == 1)
            {
                challenge();

                TipoPersonagem Julio;
                strcpy(Julio.nome,"Julio");
                Julio.vida = 100;
                Julio.mana = 50;
                Julio.ouro = 50;
                Julio.cabeca = 208;
                Julio.corpo = '|';
                Julio.arma_2 = 241;
                Julio.arma_1 = ' ';
                Julio.braco_esq = '/';
                Julio.braco_dir = 92;
                Julio.perna_esq = '/';
                Julio.perna_dir = 92;

                modo_batalha_Julio(Heroi,Julio);
                system("cls");

                if (Heroi.vida <= 0)
                {
                    game_over();
                    return 0;
                }

                evoloiu(Heroi);
                Menu_Status(Heroi);

                printf("\n\n Voce Derrotou Julio, Conseguiu encontrar Simba e entao foi teletransportado para Ribeirao das Neves...\n\n");
                simba();

            }

                TipoPersonagem Funkeiro;
                strcpy(Funkeiro.nome,"Funkeiro");
                Funkeiro.vida = 50;
                Funkeiro.mana = 0;
                Funkeiro.ouro = 20;
                Funkeiro.cabeca = 167;
                Funkeiro.corpo = '|';
                Funkeiro.arma_2 = 170;
                Funkeiro.braco_esq = '/';
                Funkeiro.braco_dir = 92;
                Funkeiro.arma_1 = ' ';
                Funkeiro.perna_esq = '/';
                Funkeiro.perna_dir = 92;

                Historia6(Heroi);
                cont = 0;
        do
        {
            cont++;
            modo_batalha3(Heroi,Funkeiro);
            system("cls");
            if(Heroi.vida <=0)
            {
                game_over();
                return 0;
            }

            printf("\n");
            printf("\n\t\t\t! ! ! FIM DE BATALHA ! ! !\n\n");
            mostra_Heroi(Heroi);
            printf("\n");
            Menu_Status(Heroi);
            printf("\n Deseja continuar batalhando ?\n\n1- Sim     2- Nao:");
            scanf("%d",&op);
            system("cls");
            printf("\n");

            if ((cont == 2) || (cont == 3) || (cont == 4))
            {
                evoloiu(Heroi);
            }

        }while(op != 1);

            Historia7(Heroi);
            caminho = escolha("1- Pelos buracos","2- Pela mata");

            if(caminho == 2)
            {
                printf("\n Voce estava andando pela Mata de Ribeirao das Neves e a policia te pegou !\n");
                system("PAUSE");
                system("cls");
                presidio();
                mostra_Heroi(Heroi);
                return 0;
            }

            Historia8(Heroi);
            Loja();
            Menu_loja(Heroi);
            printf("\n Infelizmente logo apos que voce saiu da loja, as vacas assasinas sentiram seu cheiro e foram pra cima de voce querendo te assasinar\n");
            caminho = escolha("1- Lutar vs Vacas"," 2- Sair correndo");

            if (caminho == 1)
            {
                challenge();

                TipoPersonagem Vaca;
                strcpy(Vaca.nome,"Vaca");
                Vaca.vida = 150;
                Vaca.mana = 50;
                Vaca.ouro = 70;
                Vaca.cabeca = 212;
                Vaca.corpo = 200;
                Vaca.arma_2 = ' ';
                Vaca.arma_1 = ' ';
                Vaca.braco_esq = ' ';
                Vaca.braco_dir = 92;
                Vaca.perna_esq = '|';
                Vaca.perna_dir = '|';

                modo_batalha_Vaca(Heroi,Vaca);
                system("cls");
                if (Heroi.vida <= 0)
                {
                    game_over();
                    return 0;
                }

                evoloiu(Heroi);
                Menu_Status(Heroi);

                printf("\n Voce Derrotou as vacas assasinas, mas quando elas morreram elas peidaram tanto que seu peido levou a extincao da raca humana\n");
                printf(" E tambem a Destruicao do Planeta\n");
                system("PAUSE");
                system("cls");
                planeta();

            }

            printf("\n Voce levanta em um lugar desconhecido:");
            mostra_Heroi(Heroi);
            printf("\n");
            Menu_Status(Heroi);
            system("PAUSE");
            system("cls");

            Historia9(Heroi);
            Historia10(Heroi);
            Historia10(Heroi);
            Historia10(Heroi);
            Historia11(Heroi);

            caminho = escolha("1- Vila Sesamo","2- Castelo Ratimbum");

            if (caminho == 2)
            {
                nonopeia_manca();
                printf("\n");
                mostra_Heroi(Heroi);
                return 0;
            }

            Historia11(Heroi);
            caminho = escolha("1- DBZ","2- Naruto");
            if (caminho == 2)
            {
                game_over();
                system("PAUSE");
                return 0;
            }

            Historia11(Heroi);
            caminho = escolha("1- Equisbox","2- Praystatiu");
            if (caminho == 1)
            {
                caminhao_da_morte();
                printf("\n");
                mostra_Heroi(Heroi);
                system("PAUSE");
                return 0;
            }

            op = 0;

            Historia12(Heroi);
            do
            {
            printf("\n %s consegue me ouvir ?:\n",Heroi.nome);
            printf("1- Sim      2- Nao");
            scanf("%d",&op);
            if(op == 2)
            {
                    printf("\nQue merda, essa conexao da Oi e muito ruim...\n");
            }
            }while(op == 2);
            printf("Sou eu a princesa do...\n");

            printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\aJOOOOOOOOOOOOOOOOOOOOOOOHN CEEEEEEEEEEEEEEEEEEEEEEEENA !!!\n");
            printf("To de zoas, sou a princesa do ki!\n");
            printf("Antes do planeta terra ser destruido eu consegui te trazer para este mundo, onde eu estou presa pelo principe dos Sayadins Calopsita\n");
            printf("Eu gostaria que voce viesse me resgatar assim eu poderia restaurar a paz, o planeta, e a humanidade com o meu ki\n");
            op = 0;
            printf("Voce vai vim ?:\n");
            printf("1- Sim      2- Nao");
            scanf("%d",&op);
            if (op == 2)
            {
                printf("%s diz:Nao ! Foda-se, Foda-se, Foda-se, Foda-se\n",Heroi.nome);
                system("PAUSE");
                system("cls");
                fodas();

                Historia11_alt(Heroi);
                printf("\n\t Voce arrumou 3 lindas gatas para morar junto, Coca-Cola infinita e uma vida cheia de mordomia e aventuras :)\n");
                printf("\n\t A princesa do Ki se fudeo, Vegeta agora e o ser mais poderoso de todo universo !\n");
                printf("\n\t 3 meses apos voce tacar o Foda-se para a princesa do ki, Vegeta encontrou onde voce estava, roubou suas muie de voce e te fez de empregada dele!\n");
                printf("\n\t Agora voce e uma linda donzela que trabalha para Vegeta, e quando eu digo ''trabalhar'' voce sabe do que eu estou me referindo ashaushaus ");
                printf("\n\n\t SE FUDEU");
                system("PAUSE");
                system("cls");
                jogo_zerado();
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Obrigado por Jogar");
                return 0;
            }
            printf("\nRapido %s estou quase perdendo meu ki por completo !!!\n",Heroi.nome);

            Historia13(Heroi);
            Loja();
            Menu_loja(Heroi);

            Historia14(Heroi);

            TipoPersonagem Transformers;
            strcpy(Transformers.nome,"Transformer");
            Transformers.vida = 100;
            Transformers.mana = 50;
            Transformers.ouro = 50;
            Transformers.cabeca = 220;
            Transformers.corpo = 219;
            Transformers.arma_2 = 170;
            Transformers.arma_1 = 186;
            Transformers.braco_esq = '/';
            Transformers.braco_dir = 92;
            Transformers.perna_esq = '/';
            Transformers.perna_dir = 92;

            cont = 0;
        do
        {
            cont++;
            modo_batalha4(Heroi,Transformers);
            system("cls");
            if(Heroi.vida <=0)
            {
                game_over();
                return 0;
            }

            printf("\n");
            printf("\n\t\t\t! ! ! FIM DE BATALHA ! ! !\n\n");
            mostra_Heroi(Heroi);
            printf("\n");
            Menu_Status(Heroi);
            printf("\n Deseja continuar batalhando ?\n\n1- Sim     2- Nao:");
            scanf("%d",&op);
            system("cls");
            printf("\n");

            if ((cont == 2) || (cont == 3) || (cont == 4) || (cont == 5) || (cont == 6) || (cont == 7))
            {
                evoloiu(Heroi);
            }

        }while(op != 1);

            op = 0;

            printf("Deseja ir na loja ? \n\n");
            printf("1- Sim     2- Nao:\n");
            scanf("%d",&op);

            if (op == 1)
            {
                Loja();
                Menu_loja(Heroi);
            }

            Historia14(Heroi);

            TipoPersonagem SemForma;
            strcpy(SemForma.nome,"SemForma");
            SemForma.vida = 140;
            SemForma.mana = 50;
            SemForma.ouro = 70;
            SemForma.cabeca = 168;
            SemForma.corpo = 206;
            SemForma.arma_2 = 244;
            SemForma.arma_1 = 180;
            SemForma.braco_esq = 206;
            SemForma.braco_dir = 206;
            SemForma.perna_esq = 201;
            SemForma.perna_dir = 187;

            cont = 0;

            do
        {
            cont++;
            modo_batalha5(Heroi,SemForma);
            system("cls");
            if(Heroi.vida <=0)
            {
                game_over();
                return 0;
            }

            printf("\n");
            printf("\n\t\t\t! ! ! FIM DE BATALHA ! ! !\n\n");
            mostra_Heroi(Heroi);
            printf("\n");
            Menu_Status(Heroi);
            printf("\n Deseja continuar batalhando ?\n\n1- Sim     2- Nao:");
            scanf("%d",&op);
            system("cls");
            printf("\n");

            if ((cont == 2) || (cont == 3) || (cont == 4) || (cont == 5) || (cont == 6) || (cont == 7))
            {
                evoloiu(Heroi);
            }

        }while(op != 1);

            op = 0;

            printf("\n Esta sera a ultima vez que voce podera ir a loja ! Deseja ir agora ?\n");
            printf("\n\n 1- Sim      2- Nao\n");
            if (op == 1)
            {
                Loja();
                Menu_loja(Heroi);
            }

            Historia15(Heroi);

            caminho = escolha("1- Lutar vs Vegeta","2- Arregar");
            if(caminho == 2)
            {
                printf("\n Voce chegou tao longe e arregou, Que decepcao !");
                system("PAUSE");
                game_over();
                return 0;
            }

            TipoPersonagem Calopsita;
            strcpy(Calopsita.nome,"Calopsita");
            Calopsita.vida = 350;
            Calopsita.mana = 150;
            Calopsita.ouro = 1000;
            Calopsita.cabeca = 60;
            Calopsita.corpo = 'u';
            Calopsita.arma_2 = 126;
            Calopsita.arma_1 = ' ';
            Calopsita.braco_esq = 218;
            Calopsita.braco_dir = 92;
            Calopsita.perna_esq = 192;
            Calopsita.perna_dir = 192;

            modo_batalha_Calopsita(Heroi,Calopsita);

            evoloiu_2(Heroi);

            if (Heroi.vida <=0)
            {
                printf("\n\t\t\t\t Voce subestimou o poder da Calopsita ?\n");
                system("PAUSE");
                game_over();
                return 0;
            }

            op = 0;

            printf("\n%s diz: Eu posso nao ser o mais forte do universo, nem ambicioso demais para querer ser. Mas eu tenho a confianca nos seres humanos\n",Heroi.nome);
            printf("\n Seres Humanos podem ser criaturas erroneas mas se acreditarem no poder do Barro todos nos podemos ser felizes um dia \n");
            printf("\n Eu, guerreiro do barro, almejo um mundo que haja paz, harmonia e felicidade para todos.");
            printf("\n E com a ajuda da Princesa do Ki podemos fazer com que o planeta e a raca humana seja recriada !");
            printf("\n\n Princesa do Ki diz: %s Voce sabe o que e necessario fazer certo ?",Heroi.nome);
            printf("\n %s diz: Sim princesa, estou pronto para fazer minha escolha !");
            system("PAUSE");
            system("cls");
            printf("\n\t\t\t\t Sacrificar-se Para Salvar o Planeta e a raca humana ?:");
            printf("\n1- Sim     2- Nao");
            scanf("%d",&op);

            if(op == 1)
            {
                jogo_zerado();
                return 0;
            }
            if(op == 2)
            {
                TipoPersonagem MestreCriador;
                strcpy(MestreCriador.nome,"MestreCriador");
                MestreCriador.vida = 99000;
                MestreCriador.mana = 99000;
                MestreCriador.ouro = 99999;
                MestreCriador.cabeca = 157;
                MestreCriador.corpo = 159;
                MestreCriador.arma_2 = 245;
                MestreCriador.arma_1 = 207;
                MestreCriador.braco_esq = '/';
                MestreCriador.braco_dir = 92;
                MestreCriador.perna_esq = '/';
                MestreCriador.perna_dir = 92;

                modo_batalha_Supremo(Heroi,MestreCriador);
                if(Heroi.vida <=0)
                {
                    printf("\n\t\t\t\t-> VOCE RETORNOU AO BARRO ! <-");
                    system("PAUSE");
                    system("cls");
                    jogo_zerado();
                    return 0;
                }
                printf("\n\t\t\t Parabéns voce e um dos escolhidos que conseguiu derrotar o MestreCriador do Jogo :D\n");
                printf("\n\t\t\t Se voce conseguiu voce tambem merece ser um MestreCriador\n");
                printf("\n\n\n\n Obrigado por Jogar e chegar tao longe");
            }

            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Obrigado por Jogar");

        }
        else
        {
            printf("\nOpcao Invalida, voce e lerdo ?\n");
        }

    case 2:
        printf("\n\n\t\t\t 1 ->(Guilherme Caetano) - PUC Minas, 2 Periodo, Engenharia de Computacao\n");
        printf("\n\n\t\t\t 2 ->(Marlon Nicolas) PARASITA    - PUC Minas, 2 Periodo, Engenharia de Computacao\n");
        printf("\n\n\t\t\t 3 ->(Marco Aurelio) PARASITA    - PUC Minas, 2 Periodo, Engenharia de Computacao\n\n");
        system("PAUSE");
        break;

    case 3:
        printf("\n\t\t\t\tVOCE E UM GRANDE ARREEEEEEGAO, ADEUS\n\n\n");
        fodas();
        system("PAUSE");
        return 0;
        break;


    default : printf("\n Opcao invalida, voce e lerdo ?\n\n\n");
    system("PAUSE");

    }

    return 0;
}
