//
//  ShareVaule.m
//  Wochuke
//
//  Created by he songhang on 13-6-27.
//  Copyright (c) 2013年 he songhang. All rights reserved.
//

#import "ShareVaule.h"

static ShareVaule *_shareVaule;

@implementation ShareVaule

+(ShareVaule *)shareInstance;{
    if (!_shareVaule) {
        _shareVaule = [[ShareVaule alloc]init];
        _shareVaule.stepImageDic = [[[NSMutableDictionary alloc]init]autorelease];
    }
    return _shareVaule;
}

-(void)dealloc{
    [_stepImageDic release];
    [_editGuideEx release];
    [super dealloc];
}

@end
