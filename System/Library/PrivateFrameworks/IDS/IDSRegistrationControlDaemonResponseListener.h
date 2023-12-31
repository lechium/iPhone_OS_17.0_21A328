//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSRegistrationControlDaemonResponseListener : NSObject
{
    IDSDaemonRequestTimer *_requestTimer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051d13
- (void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000051b95
- (void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000051a59
- (id)initWithRequestTimer:(id)arg1;	// IMP=0x000000000005197a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

