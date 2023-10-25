//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MontrealNNModelNetwork, NSDictionary, NSString;

@interface MontrealModelJSONParser : NSObject
{
    NSString *_jsonDir;	// 8 = 0x8
    MontrealNNModelNetwork *_network;	// 16 = 0x10
    NSDictionary *_infoDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018670
@property(readonly) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
- (id)createJSONFromFile:(id)arg1;	// IMP=0x0000000000018590
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000184b0

@end
