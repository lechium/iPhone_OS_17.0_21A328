//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class NSArray;
@protocol SMUSystemDisplayIdentity;

@protocol SMUSystemDisplayLayoutMonitoring <NSObject>
+ (id)externalDisplayLayoutMonitorWithIdentity:(id <SMUSystemDisplayIdentity>)arg1;
+ (id)mainDisplayLayoutMonitor;
@property(copy, nonatomic) CDUnknownBlockType transitionHandler;
@property(readonly, nonatomic) NSArray *currentLayout;
@end

