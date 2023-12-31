//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MISSING_TYPE, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface PrivacyPromptOperation : ISOperation
{
    CDUnknownBlockType _completion;	// 96 = 0x60
    MISSING_TYPE *_privacyIdentifier;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_privacyPromptSemaphore;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000014bf6e
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *privacyPromptSemaphore; // @synthesize privacyPromptSemaphore=_privacyPromptSemaphore;
@property(copy, nonatomic) NSString *privacyIdentifier; // @synthesize privacyIdentifier=_privacyIdentifier;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)_privacyAcknowledgementURLString;	// IMP=0x001000000014bc4c
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000014ba61
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x001000000014b89f
- (void)run;	// IMP=0x001000000014b621
- (id)initWithPrivacyIdentifier:(id)arg1;	// IMP=0x001000000014b5b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

