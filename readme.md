###UIscrollView的三级嵌套

scrollView下有一个scrollView1,  scrollView1下有个UITableView


遇到的问题：
两个scrollView相同方向（垂直方向滚动），scrollView1 到达顶部会拖动scrollView移动
三个scrollView相同方向（垂直方向滚动），当tableView到大顶部，不拖动scrollView移动。

###效果图：
![Untitled.gif](http://upload-images.jianshu.io/upload_images/317394-b40a94d98bb1071b.gif)

使用方法：
1、添加headerView 和 bottomView
<pre>
menuVieweEx = [[MenuViewEx alloc] initWithFrame:self.view.bounds topView:_headerView bottomView:_menuVc.view];
    [self.view addSubview:menuVieweEx];
</pre>


在对用的scrollview类簇上添加手势，以实现垂直方向的联动推拽
<pre>-(void)addGestureOfView:(id)view;</pre>


注意：使用需要讲subView的所有父类为 UICollectionView 和 UItableView上添加手势， 否则会出现卡顿现象


###遗留问题
遍历所有的UITableView 和 collectionView 更改他们的属性有问题（无法水品滚动），暂时屏蔽了