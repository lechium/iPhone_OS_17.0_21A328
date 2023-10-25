//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SIKGInteractionEdge
{
    NSString *_relationship;	// 8 = 0x8
    double _score;	// 16 = 0x10
}

+ (id)filter;	// IMP=0x004000000003397e
- (void).cxx_destruct;	// IMP=0x0020000000033c53
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
- (id)label;	// IMP=0x0010000000033c23
- (id)propertyDictionary;	// IMP=0x0010000000033b57
- (id)initWithSourceNode:(id)arg1 targetNode:(id)arg2 relationship:(id)arg3 score:(double)arg4;	// IMP=0x0010000000033aaa
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x00100000000339b3

@end
