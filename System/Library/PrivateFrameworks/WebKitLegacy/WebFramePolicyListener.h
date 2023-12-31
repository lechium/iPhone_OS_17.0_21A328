//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject
{
    struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> _frame;	// 8 = 0x8
    ProcessQualified_bb72c1c6 _identifier;	// 16 = 0x10
    struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>)> _policyFunction;	// 32 = 0x20
    struct RetainPtr<NSURL> _appLinkURL;	// 40 = 0x28
    struct RetainPtr<NSURL> _referrerURL;	// 48 = 0x30
    unsigned char _defaultPolicy;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00100000000ac4f0
- (id).cxx_construct;	// IMP=0x00000000000ace50
- (void).cxx_destruct;	// IMP=0x00000000000acd70
- (void)continue;	// IMP=0x00000000000acd50
- (void)use;	// IMP=0x00000000000acbc0
- (void)download;	// IMP=0x00000000000acba0
- (void)ignore;	// IMP=0x00000000000acb80
- (void)receivedPolicyDecision:(unsigned char)arg1;	// IMP=0x00000000000aca90
- (void)dealloc;	// IMP=0x00000000000ac910
- (void)invalidate;	// IMP=0x00000000000ac830
- (id)initWithFrame:(NakedPtr_9be60511)arg1 identifier:(ProcessQualified_bb72c1c6)arg2 policyFunction:(void *)arg3 defaultPolicy:(unsigned char)arg4 appLinkURL:(id)arg5 referrerURL:(id)arg6;	// IMP=0x00000000000ac600
- (id)initWithFrame:(NakedPtr_9be60511)arg1 identifier:(ProcessQualified_bb72c1c6)arg2 policyFunction:(void *)arg3 defaultPolicy:(unsigned char)arg4;	// IMP=0x00000000000ac500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

