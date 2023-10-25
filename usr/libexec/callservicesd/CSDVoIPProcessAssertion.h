//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

@interface CSDVoIPProcessAssertion : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    BKSProcessAssertion *_processAssertion;	// 16 = 0x10
}

+ (id)processAssertionNameForBundleIdentifier:(id)arg1;	// IMP=0x004000000000cb4b
+ (id)processAssertionWithBundleIdentifier:(id)arg1;	// IMP=0x001000000000cab9
- (void).cxx_destruct;	// IMP=0x002000000000cd3f
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;	// IMP=0x001000000000ccd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000cc22
- (id)name;	// IMP=0x001000000000cbb8
- (void)acquireWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c9e1
- (void)dealloc;	// IMP=0x001000000000c8f1
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000000c886

@end
