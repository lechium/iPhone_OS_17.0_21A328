//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ObjCVersion : NSObject
{
    MISSING_TYPE *version;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003dd900
@property(nonatomic, readonly) NSString *description;
- (void)apply:(id)arg1;	// IMP=0x00000000003dd730
- (void)merge:(id)arg1;	// IMP=0x00000000003dd620
- (void)subtract:(id)arg1;	// IMP=0x00000000003dd600
- (void)subtractWithRange:(struct _NSRange)arg1 replica:(id)arg2;	// IMP=0x00000000003dd590
- (void)insertWithRange:(struct _NSRange)arg1 replica:(id)arg2;	// IMP=0x00000000003dd3e0
- (_Bool)contains:(id)arg1;	// IMP=0x00000000003dd280
- (id)copy;	// IMP=0x00000000003dcb30
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003dc9b0
- (long long)compareTo:(id)arg1;	// IMP=0x00000000003dc750
- (_Bool)hasDeltaTo:(id)arg1;	// IMP=0x00000000003dc640
@property(nonatomic, readonly) NSArray *sortedUUIDs;
- (id)temporaryComponentsWithExcluding:(id)arg1;	// IMP=0x00000000003dc4c0
@property(nonatomic, readonly) _Bool hasTemporaryComponents;
@property(nonatomic, readonly) long long maxCounter;
@property(nonatomic, readonly) _Bool isEmpty;
- (id)init;	// IMP=0x00000000003dc150

@end

