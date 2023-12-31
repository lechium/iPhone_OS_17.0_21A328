//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPDFParserDelegate : NSObject
{
    struct CGPoint _p[4];	// 8 = 0x8
    struct CGPath *_path;	// 72 = 0x48
    _Bool _parserError;	// 80 = 0x50
}

@property(readonly) _Bool parserError; // @synthesize parserError=_parserError;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000110746f
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x0000000001107290
- (void)parserDidStartDocument:(id)arg1;	// IMP=0x000000000110728a
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x0000000001107280
@property(readonly) struct CGPath *path; // @dynamic path;
- (void)dealloc;	// IMP=0x000000000110723c
- (id)init;	// IMP=0x00000000011071fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

