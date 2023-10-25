//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface T1SupervisoryBlock
{
}

+ (id)supervisoryBlockWithNad:(unsigned char)arg1 operation:(BOOL)arg2 type:(BOOL)arg3 informationField:(id)arg4 redundancyCode:(BOOL)arg5;	// IMP=0x004000000000650c
- (_Bool)needAck;	// IMP=0x0020000000006749
@property(readonly) unsigned char uint8Value;
@property(readonly) BOOL type;
@property(readonly) BOOL operation;
@property(readonly) BOOL sequence;
- (id)description;	// IMP=0x0010000000006402
- (id)typeStr;	// IMP=0x00100000000063db
- (id)operationStr;	// IMP=0x00100000000063a8
- (id)initWithData:(id)arg1;	// IMP=0x001000000000620d

@end
