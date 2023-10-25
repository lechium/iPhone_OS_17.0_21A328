//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSSLegalDocumentsCache : NSObject
{
    NSDictionary *_reply;	// 8 = 0x8
    NSArray *_preferredLanguages;	// 16 = 0x10
    NSString *_gizmoBuildVersion;	// 24 = 0x18
}

+ (void)handleMemoryPressureEvent;	// IMP=0x0020000000020312
+ (id)cachedReplyForPreferredLanguages:(id)arg1;	// IMP=0x001000000002001e
+ (void)cacheReply:(id)arg1 forPreferredLanguages:(id)arg2 gizmoBuildVersion:(id)arg3;	// IMP=0x001000000001faf1
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001f8f7
- (void).cxx_destruct;	// IMP=0x00200000000203e7
@property(retain, nonatomic) NSString *gizmoBuildVersion; // @synthesize gizmoBuildVersion=_gizmoBuildVersion;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) NSDictionary *reply; // @synthesize reply=_reply;
- (_Bool)isValidForPreferredLanguages:(id)arg1 gizmoBuildVersion:(id)arg2;	// IMP=0x001000000002032f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001f980
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001f8ff

@end
