//
//  BFsMapPointModel.h
//  BFsMKMapView
//
//  Created by BFsAlex on 2019/9/8.
//  Copyright © 2019年 BFs. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BFsMapPointModel : NSObject

@property (nonatomic, strong) NSString *index;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSString *coor_N;
@property (nonatomic, strong) NSString *coor_E;
@property (nonatomic, strong) NSString *speed;
@property (nonatomic, strong) NSString *coor_X;
@property (nonatomic, strong) NSString *coor_Y;
@property (nonatomic, strong) NSString *coor_Z;

@end

NS_ASSUME_NONNULL_END
