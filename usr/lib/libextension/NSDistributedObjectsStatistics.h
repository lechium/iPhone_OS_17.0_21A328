//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDistributedObjectsStatistics : NSDictionary
{
    unsigned long long requestsReceived;	// 8 = 0x8
    unsigned long long repliesSent;	// 16 = 0x10
    unsigned long long requestsSent;	// 24 = 0x18
    unsigned long long repliesReceived;	// 32 = 0x20
}

- (id)objectForKey:(id)arg1;	// IMP=0x0000000000613e23
- (void)addStatistics:(id)arg1;	// IMP=0x0000000000613de1
- (id)keyEnumerator;	// IMP=0x0000000000613db6
- (id)allKeys;	// IMP=0x0000000000613da9
- (unsigned long long)count;	// IMP=0x0000000000613d9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000613d44

@end

