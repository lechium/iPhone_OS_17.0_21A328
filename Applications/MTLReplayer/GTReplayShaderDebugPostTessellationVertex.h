//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GTReplayShaderDebugPostTessellationVertex
{
    unsigned int _instanceID;	// 40 = 0x28
    unsigned int _amplificationID;	// 44 = 0x2c
    NSArray *_patchIDs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000067d1
- (void).cxx_destruct;	// IMP=0x00200000000069f5
@property(retain, nonatomic) NSArray *patchIDs; // @synthesize patchIDs=_patchIDs;
@property(nonatomic) unsigned int amplificationID; // @synthesize amplificationID=_amplificationID;
@property(nonatomic) unsigned int instanceID; // @synthesize instanceID=_instanceID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000068d4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000067d9

@end

