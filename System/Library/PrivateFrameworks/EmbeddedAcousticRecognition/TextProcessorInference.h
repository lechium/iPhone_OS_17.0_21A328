//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorInference : NSObject
{
    NSMutableArray *_text;	// 8 = 0x8
    _EARLMTKaldiVocab *_vocab;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020b47e
- (id)textSequence;	// IMP=0x000000000020b470
- (void)addText:(id)arg1;	// IMP=0x000000000020b40d
- (void)resetWithBOS:(unsigned long long)arg1;	// IMP=0x000000000020b3bb
- (id)initWithLength:(unsigned long long)arg1 vocab:(id)arg2 BOS:(unsigned long long)arg3;	// IMP=0x000000000020b343
- (id)initWithVocab:(id)arg1;	// IMP=0x000000000020b2be
- (id)init;	// IMP=0x000000000020b2b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

