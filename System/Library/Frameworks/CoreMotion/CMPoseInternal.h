//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMAttitude;

@interface CMPoseInternal : NSObject
{
    CMAttitude *fAttitude;	// 8 = 0x8
    CDStruct_31142d93 fTranslation;	// 16 = 0x10
    double fConsumedAuxTimestamp;	// 40 = 0x28
    double fReceivedAuxTimestamp;	// 48 = 0x30
    double fMachAbsTimestamp;	// 56 = 0x38
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023ba81
- (_Bool)isEqualToPoseInternal:(id)arg1;	// IMP=0x000000000023b9ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023b951
- (void)dealloc;	// IMP=0x000000000023b916
- (id)initWithPose:(CDStruct_d035bcc1)arg1;	// IMP=0x000000000023b878

@end

