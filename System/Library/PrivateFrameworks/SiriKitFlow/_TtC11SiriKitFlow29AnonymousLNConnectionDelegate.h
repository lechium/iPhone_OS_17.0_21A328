//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11SiriKitFlow29AnonymousLNConnectionDelegate : NSObject
{
    MISSING_TYPE *continuation;	// 2 = 0x2
}

- (void).cxx_destruct;	// IMP=0x00000000001f9807
- (id)init;	// IMP=0x00000000001f97d2
- (void)executor:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;	// IMP=0x00000000001f972f
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;	// IMP=0x00000000001f92fe
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;	// IMP=0x00000000001f911c
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;	// IMP=0x00000000001f8e12
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;	// IMP=0x00000000001f8b42

@end
