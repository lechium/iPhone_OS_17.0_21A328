//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "XCTMessagingRole_AttachmentFutureResultStatusUpdating-Protocol.h"
#import "XCTMessagingRole_CrashReporting-Protocol.h"
#import "XCTMessagingRole_DebugLogging-Protocol.h"
#import "XCTMessagingRole_SelfDiagnosisIssueReporting-Protocol.h"
#import "_XCTMessaging_VoidProtocol-Protocol.h"

@protocol XCTMessagingChannel_DaemonToIDE <XCTMessagingRole_DebugLogging, XCTMessagingRole_SelfDiagnosisIssueReporting, XCTMessagingRole_CrashReporting, XCTMessagingRole_AttachmentFutureResultStatusUpdating, _XCTMessaging_VoidProtocol>

@optional
- (void)__dummy_method_to_work_around_68987191;
@end

