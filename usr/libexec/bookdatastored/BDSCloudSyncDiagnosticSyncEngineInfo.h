//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BDSCloudSyncDiagnosticSyncEngineInfo : NSObject
{
    _Bool _establishedSalt;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005c2ac
@property(nonatomic) _Bool establishedSalt; // @synthesize establishedSalt=_establishedSalt;
@property(readonly, nonatomic) NSDictionary *stateForLog;
- (id)description;	// IMP=0x001000000005c3ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005c367
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005c30e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005c2b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005c207
- (id)initWithEstablishedSalt:(_Bool)arg1;	// IMP=0x001000000005c1cc

@end

