//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COMeshTimerAddOn, NSArray;

@protocol COMeshTimerAddOnDelegate <NSObject>

@optional
- (void)didChangeCompositionForTimerAddOn:(COMeshTimerAddOn *)arg1;
- (void)didResetTimerAddOn:(COMeshTimerAddOn *)arg1;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didDismissTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didFireTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didChangeTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didUpdateTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didRemoveTimers:(NSArray *)arg2;
- (void)timerAddOn:(COMeshTimerAddOn *)arg1 didAddTimers:(NSArray *)arg2;
@end
