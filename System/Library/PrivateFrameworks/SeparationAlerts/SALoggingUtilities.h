//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SALoggingUtilities : NSObject
{
}

+ (id)extractEventFromMessages:(id)arg1;	// IMP=0x00800000000305a6
+ (id)extractUniqueIdentifierFromMessage:(id)arg1;	// IMP=0x008000000003048c
+ (id)stringToSplit:(id)arg1 maxSplitSize:(unsigned long long)arg2;	// IMP=0x0080000000030320
+ (id)computeMessagesForEvent:(id)arg1;	// IMP=0x008000000002ff09
+ (void)logTAEvent:(id)arg1;	// IMP=0x008000000002fd81

@end

