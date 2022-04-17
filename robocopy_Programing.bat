REM /s=Sub Directry /e=Empty Directry /MIR=Mirroring /R:10=Retry /W:0=Wait /LOG:Pass /NP=NoPresent /NDL=NoDirectryLog /COPYALL
robocopy atcoder E:\1_Private\03_Programing\atcoder /MIR /s /e /LOG:.\robocopyLOGa.txt /NP /NDL
robocopy Project_Euler E:\1_Private\03_Programing\Project_Euler /MIR /s /e /LOG:.\robocopyLOGe.txt /NP /NDL
pause
