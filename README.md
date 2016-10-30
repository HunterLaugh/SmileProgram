 # git学习
 ## …or create a new repository on the command line

- echo "# SmileProgram" >> README.md
- git init
- git add README.md
- git commit -m "first commit"
- git remote add origin git@github.com:HunterLaugh/SmileProgram.git
- git push -u origin master


## …or push an existing repository from the command line

- git remote add origin git@github.com:HunterLaugh/SmileProgram.git
-git push -u origin master



## …or import code from another repository
- You can initialize this repository with code from a Subversion, Mercurial, or TFS project.


## 也可以不登陆远程直接本地操作
1. git init
2. git add .
3. git commit -am "###"      -------以上3步只是本地提交
4. git remote add origin git@xx.xx.xx.xx:repos/xxx/xxx/xxx.git
5. git push origin 本地分支:远程分支
