//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol EvaluatorDataSource;

__attribute__((visibility("hidden")))
@interface EvaluationDataSourceEspressoWrapper : NSObject
{
    id <EvaluatorDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008794
@property(retain, nonatomic) id <EvaluatorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (int)numberOfDataPoints;	// IMP=0x0000000000008721
- (id)featureProviderAtIndex:(int)arg1;	// IMP=0x00000000000086b6
- (id)dataPointAtIndex:(int)arg1;	// IMP=0x000000000000864b
- (id)dataProcessAtIndex:(int)arg1;	// IMP=0x00000000000079eb
- (id)initWithEvaluatorDataSource:(id)arg1;	// IMP=0x0000000000007959

@end
