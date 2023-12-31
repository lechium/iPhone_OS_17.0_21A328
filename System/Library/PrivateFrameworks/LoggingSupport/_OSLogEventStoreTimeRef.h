//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogEventStoreTimeRef : NSObject
{
    unsigned char _uuid[16];	// 8 = 0x8
    unsigned long long _ct;	// 24 = 0x18
}

+ (id)timeRef;	// IMP=0x006000000004ac27
@property(readonly, nonatomic) unsigned long long continuousTime; // @synthesize continuousTime=_ct;
@property(readonly, nonatomic) const char *UUID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004acdd
- (id)initWithUUID:(unsigned char [16])arg1 continuous:(unsigned long long)arg2;	// IMP=0x000000000004acad

@end

