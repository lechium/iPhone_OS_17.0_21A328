//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SUUIReportAConcernMetadata;

__attribute__((visibility("hidden")))
@interface SUUIReportAConcernOperation : ISOperation
{
    NSDictionary *_responseDictionary;	// 96 = 0x60
    SUUIReportAConcernMetadata *_metadata;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000020c5ca
@property(retain, nonatomic) SUUIReportAConcernMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)_httpBody;	// IMP=0x000000000020c324
- (void)run;	// IMP=0x000000000020c0b3
- (id)initWithMetadata:(id)arg1;	// IMP=0x000000000020c045

@end

