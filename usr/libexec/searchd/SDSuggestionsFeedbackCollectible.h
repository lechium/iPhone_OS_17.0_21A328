//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SDSuggestionsFeedbackCollectible : NSObject
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000016698
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)dataCollectionBundle;	// IMP=0x001000000001667a
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2;	// IMP=0x0010000000016537
- (id)initWithSuggestionsData:(id)arg1;	// IMP=0x00100000000164c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
