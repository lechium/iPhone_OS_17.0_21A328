//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXPiOSElementData : NSObject
{
    int _pid;	// 8 = 0x8
    CDStruct_26bd94fa _uid;	// 12 = 0xc
}

@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) CDStruct_26bd94fa uid; // @synthesize uid=_uid;
- (id)description;	// IMP=0x0000000000001432
- (unsigned long long)hash;	// IMP=0x00000000000013e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000012ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001280

@end
