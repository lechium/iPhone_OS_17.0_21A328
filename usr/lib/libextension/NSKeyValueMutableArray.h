//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

+ (id)_proxyShare;	// IMP=0x0010000000689332
- (void)setArray:(id)arg1;	// IMP=0x00000000006894c3
- (void)dealloc;	// IMP=0x0000000000689466
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000689422
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000689375
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x0000000000689359

@end

