//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLObjectPayloadBindingInternal
{
    unsigned short _alignment;	// 64 = 0x40
    unsigned int _dataSize;	// 68 = 0x44
    unsigned long long _dataType;	// 72 = 0x48
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000779f7
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000778a9
- (void)setStructType:(id)arg1;	// IMP=0x00000000000778a0
- (void)setStructType:(id)arg1 doRetain:(_Bool)arg2;	// IMP=0x0000000000077806
- (id)structType;	// IMP=0x00000000000777f4
- (id)objectPayloadStructType;	// IMP=0x00000000000777c2
- (unsigned long long)objectPayloadDataType;	// IMP=0x00000000000777b1
@property(readonly) unsigned long long objectPayloadDataSize;
@property(readonly) unsigned long long objectPayloadAlignment;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;	// IMP=0x00000000000776c1
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 dataSize:(unsigned long long)arg7 alignment:(unsigned long long)arg8;	// IMP=0x000000000007768b

// Remaining properties
@property(readonly) unsigned long long access;
@property(readonly, getter=isArgument) _Bool argument;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long index;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@property(readonly) long long type;
@property(readonly, getter=isUsed) _Bool used;

@end

