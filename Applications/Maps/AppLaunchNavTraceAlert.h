//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppLaunchNavTraceAlert : NSObject
{
    _Bool _isDisplayingAlert;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007876ca
- (void)_alertDidFinishProcessing;	// IMP=0x0010000000787628
- (void)_displayAlert;	// IMP=0x0010000000787384
- (_Bool)_shouldDisplayAlert;	// IMP=0x00100000007872ff
- (void)cancelAlertIfNecessary;	// IMP=0x0010000000787272
- (void)displayAlertIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000787173

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
