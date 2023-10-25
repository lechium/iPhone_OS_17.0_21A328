//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphObject.h"

@class NSArray, NSData, NSMutableArray;

@interface MPSGraphVariable : MPSGraphObject
{
    NSData *_data;	// 8 = 0x8
    NSMutableArray *_mpsndarrays;	// 16 = 0x10
    struct Value _value;	// 24 = 0x18
    unsigned int _dataType;	// 32 = 0x20
    NSArray *_shape;	// 40 = 0x28
}

+ (id)newVariableWithData:(id)arg1 dataType:(unsigned int)arg2 shape:(id)arg3;	// IMP=0x00100000001b466f
- (id).cxx_construct;	// IMP=0x00000000001b4c75
- (void).cxx_destruct;	// IMP=0x00000000001b4c33
@property(readonly, nonatomic) struct Value value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, copy, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b4bd1
- (id)mpsNDArrayWithDevice:(id)arg1;	// IMP=0x00000000001b47fa
- (id)initVariableWithMPSNDArray:(id)arg1 value:(struct Value)arg2;	// IMP=0x00000000001b47ae
- (id)initVariableWithData:(id)arg1 value:(struct Value)arg2;	// IMP=0x00000000001b46fe
- (id)initVariableWithData:(id)arg1 dataType:(unsigned int)arg2 shape:(id)arg3;	// IMP=0x00000000001b453e

@end
