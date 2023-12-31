//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x00200000000ab34b
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x00100000000ab138
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x00100000000ab0ed
- (void)run;	// IMP=0x00100000000aabb9
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x00100000000aab59
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x00100000000aaafb
- (id)init;	// IMP=0x00100000000aaae7

@end

