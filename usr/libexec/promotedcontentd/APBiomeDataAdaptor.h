//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMStream;

@interface APBiomeDataAdaptor
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    BMStream *_stream;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000c5ac
@property(retain, nonatomic) BMStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)_biomeStream;	// IMP=0x001000000000c55d
- (void)clearDataWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c207
- (void)clearAllData;	// IMP=0x001000000000c1e6
- (_Bool)allowEmptyParameters;	// IMP=0x001000000000c1de
- (_Bool)addData:(id)arg1;	// IMP=0x001000000000be6a
- (void)_run:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b0ac
- (_Bool)_validateParameters:(id *)arg1;	// IMP=0x001000000000ac5c

@end

