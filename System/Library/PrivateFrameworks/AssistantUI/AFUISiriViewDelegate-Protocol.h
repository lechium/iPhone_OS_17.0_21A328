//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISiriView, NSString;

@protocol AFUISiriViewDelegate <NSObject>
- (_Bool)requestSessionAttendingState;
- (_Bool)siriViewShouldSupportTextInput:(AFUISiriView *)arg1;
- (void)siriView:(AFUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (_Bool)siriView:(AFUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(AFUISiriView *)arg1;
- (float)audioRecordingPowerLevelForSiriView:(AFUISiriView *)arg1;
@end

