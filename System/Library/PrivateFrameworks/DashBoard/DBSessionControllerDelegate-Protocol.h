//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CARSession, DBSessionController;

@protocol DBSessionControllerDelegate <NSObject>
- (void)sessionController:(DBSessionController *)arg1 didDisconnectSession:(CARSession *)arg2;
- (void)sessionController:(DBSessionController *)arg1 didConnectSession:(CARSession *)arg2;
@end

