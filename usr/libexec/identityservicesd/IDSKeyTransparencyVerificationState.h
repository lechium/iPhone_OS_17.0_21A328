//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSKeyTransparencyVerificationState : NSObject
{
    NSNumber *_transparencyStatus;	// 8 = 0x8
    NSData *_transparencyBlob;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000437ccb
@property(readonly, nonatomic) NSData *transparencyBlob; // @synthesize transparencyBlob=_transparencyBlob;
@property(readonly, nonatomic) NSNumber *transparencyStatus; // @synthesize transparencyStatus=_transparencyStatus;
- (id)description;	// IMP=0x0010000000437bf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000437be9
- (unsigned long long)hash;	// IMP=0x0010000000437b5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000437b04
- (_Bool)isEqualToKeyTransparencyVerificationState:(id)arg1;	// IMP=0x0010000000437923
- (id)initWithTransparencyStatus:(id)arg1 transparencyBlob:(id)arg2;	// IMP=0x0010000000437878

@end

