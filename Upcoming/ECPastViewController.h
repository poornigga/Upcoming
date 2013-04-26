//
//  ECPastViewController.h
//  EventCollectionView
//
//  Created by Brendan Lynch on 13-04-18.
//  Copyright (c) 2013 Teehan+Lax. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ECPastViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic, assign) BOOL expanded;
@property (nonatomic, assign) CGFloat parentHeight;

@end