//
//  YKPieView.h
//  YKPieView
//
//  Created by Kai_Yi on 2016/10/14.
//  Copyright © 2016年 Kai_Yi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YKPieView : UIView

@property (nonatomic, strong) NSArray *shareArray;

- (void)reloadData;
@end
