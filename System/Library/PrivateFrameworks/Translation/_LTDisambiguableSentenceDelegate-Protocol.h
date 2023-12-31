//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class NSSet, _LTDisambiguableSentence, _LTDisambiguationNode, _LTDisambiguationUserSelection;

@protocol _LTDisambiguableSentenceDelegate <NSObject>

@optional
- (NSSet *)excludedTypesForDisambiguableSentence:(_LTDisambiguableSentence *)arg1;
- (void)disambiguableSentence:(_LTDisambiguableSentence *)arg1 didSelectNode:(_LTDisambiguationNode *)arg2 atIndex:(unsigned long long)arg3 withSelection:(_LTDisambiguationUserSelection *)arg4;
@end

