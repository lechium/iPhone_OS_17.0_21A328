//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SKGInteractionEdge
{
    NSNumber *_score;	// 8 = 0x8
    NSString *_domainIdentifier;	// 16 = 0x10
    NSString *_relationship;	// 24 = 0x18
}

+ (id)filterWithDomainIdentifier:(id)arg1;	// IMP=0x0040000000029e3b
+ (id)filter;	// IMP=0x0010000000029e06
- (void).cxx_destruct;	// IMP=0x002000000002a348
@property(readonly, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (id)score;	// IMP=0x001000000002a315
- (id)label;	// IMP=0x001000000002a308
- (id)propertyDictionary;	// IMP=0x001000000002a1c9
- (id)initWithSourceNode:(id)arg1 targetNode:(id)arg2 domainIdentifier:(id)arg3 relationship:(id)arg4 score:(id)arg5;	// IMP=0x001000000002a0c2
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x0010000000029f2d

@end
