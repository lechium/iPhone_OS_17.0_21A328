//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CRVehicle, DBSessionController;

@protocol DBSessionControllerObserving <NSObject>

@optional
- (void)sessionController:(DBSessionController *)arg1 didUpdateVehicle:(CRVehicle *)arg2;
@end
