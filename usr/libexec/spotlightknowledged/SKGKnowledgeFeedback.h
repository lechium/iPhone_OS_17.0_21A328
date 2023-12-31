//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface SKGKnowledgeFeedback : NSObject
{
    NSString *_versionName;	// 8 = 0x8
    NSDate *_currentDate;	// 16 = 0x10
    NSCalendar *_currentCalendar;	// 24 = 0x18
    NSMutableDictionary *_feedback;	// 32 = 0x20
    NSMutableDictionary *_defaults;	// 40 = 0x28
    NSMutableDictionary *_bundles;	// 48 = 0x30
    NSString *_currentDateKey;	// 56 = 0x38
    long long _currentPid;	// 64 = 0x40
    NSMutableDictionary *_sessions;	// 72 = 0x48
    NSMutableDictionary *_signposts;	// 80 = 0x50
    NSMutableDictionary *_stats;	// 88 = 0x58
    NSMutableSet *_errors;	// 96 = 0x60
    NSMutableSet *_events;	// 104 = 0x68
    NSMutableSet *_flags;	// 112 = 0x70
    double _startTime;	// 120 = 0x78
    unsigned long long _currentGraphSize;	// 128 = 0x80
    unsigned long long _currentArchiveSize;	// 136 = 0x88
    unsigned long long _currentJournalSize;	// 144 = 0x90
    unsigned long long _currentArchiveCount;	// 152 = 0x98
    unsigned long long _currentJournalCount;	// 160 = 0xa0
    unsigned long long _numQueryItemsExtracted;	// 168 = 0xa8
    unsigned long long _numArchiveItemsExtracted;	// 176 = 0xb0
    unsigned long long _numJournalQueryItemsExtracted;	// 184 = 0xb8
    unsigned long long _numJournalArchiveItemsExtracted;	// 192 = 0xc0
    unsigned long long _numJournalItemsExtracted;	// 200 = 0xc8
    unsigned long long _numJournalsProcessed;	// 208 = 0xd0
    unsigned long long _numArchivesProcessed;	// 216 = 0xd8
    unsigned long long _numArchivesGenerated;	// 224 = 0xe0
    unsigned long long _numPeopleGenerated;	// 232 = 0xe8
    long long _graphVersion;	// 240 = 0xf0
    long long _journalArchiveItemExtractedCount;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x002000000003b91d
@property(readonly, nonatomic) long long journalArchiveItemExtractedCount; // @synthesize journalArchiveItemExtractedCount=_journalArchiveItemExtractedCount;
- (unsigned long long)itemCountWithKey:(id)arg1;	// IMP=0x001000000003b86c
- (void)updateItemCountWithKey:(id)arg1;	// IMP=0x001000000003b7e8
- (unsigned long long)indexWithKey:(id)arg1;	// IMP=0x001000000003b744
- (void)setIndexWithKey:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x001000000003b6c5
- (double)timeWithKey:(id)arg1;	// IMP=0x001000000003b618
- (void)setTimeWithKey:(id)arg1 value:(double)arg2;	// IMP=0x001000000003b593
- (id)recoveryTimesWithKey:(id)arg1;	// IMP=0x001000000003b54c
- (void)setRecoveryTimesWithKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000003b53a
- (_Bool)modeWithKey:(id)arg1;	// IMP=0x001000000003b496
- (void)setModeWithKey:(id)arg1 value:(_Bool)arg2;	// IMP=0x001000000003b419
- (void)removeDefaults;	// IMP=0x001000000003b39d
- (void)removeKey:(id)arg1;	// IMP=0x001000000003b2a2
- (id)defaultValueWithKey:(id)arg1;	// IMP=0x001000000003b1e6
- (id)defaultValueWithKey:(id)arg1 versionName:(id)arg2;	// IMP=0x001000000003b146
- (void)setDefaultWithKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000003b00c
- (id)defaultPropertiesForVersionName:(id)arg1;	// IMP=0x001000000003aefb
- (id)defaults;	// IMP=0x001000000003aecb
- (_Bool)generateReportUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a8b7
- (_Bool)hasFlag:(long long)arg1;	// IMP=0x001000000003a835
- (_Bool)hasError:(long long)arg1;	// IMP=0x001000000003a7b3
- (_Bool)hasEvent:(long long)arg1;	// IMP=0x001000000003a731
- (void)clearDefaultWithIdentifier:(id)arg1 protectionClass:(id)arg2 key:(id)arg3;	// IMP=0x001000000003a666
- (id)getDefaultWithIdentifier:(id)arg1 protectionClass:(id)arg2 key:(id)arg3;	// IMP=0x001000000003a58a
- (void)logDefaultWithIdentifier:(id)arg1 protectionClass:(id)arg2 key:(id)arg3 value:(id)arg4;	// IMP=0x001000000003a488
- (id)getNextArchiveNameWithIdentifier:(id)arg1 protectionClass:(id)arg2;	// IMP=0x001000000003a3be
- (void)logArchiveWithIdentifier:(id)arg1 protectionClass:(id)arg2;	// IMP=0x001000000003a31f
- (void)getQueryTimeWithIdentifier:(id)arg1 protectionClass:(id)arg2 startTime:(double *)arg3 endTime:(double *)arg4 processingEndTime:(double *)arg5;	// IMP=0x001000000003a0b4
- (void)logQueryTimeWithIdentifier:(id)arg1 protectionClass:(id)arg2 startTime:(double)arg3 doneProcessing:(_Bool)arg4;	// IMP=0x0010000000039e9c
- (_Bool)hasCurrentFlagWithName:(id)arg1;	// IMP=0x0010000000039e26
- (long long)getCurrentExtractedArchiveItemCount;	// IMP=0x0010000000039b72
- (long long)getCurrentExtractedJournalQueryItemCount;	// IMP=0x00100000000398be
- (long long)getCurrentExtractedJournalItemCount;	// IMP=0x001000000003960a
- (long long)getCurrentExtractedQueryItemCount;	// IMP=0x0010000000039356
- (void)logExtractedJournalItemCount:(unsigned long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000039181
- (void)logExtractedJournalArchiveItemCount:(unsigned long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000038fac
- (void)logExtractedJournalQueryItemCount:(unsigned long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000038dd7
- (void)logExtractedArchiveItemCount:(unsigned long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000038c02
- (void)logExtractedQueryItemCount:(unsigned long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000038a2d
- (void)logProcessedArchiveWithName:(id)arg1;	// IMP=0x001000000003898f
- (void)logProcessedJournalWithName:(id)arg1;	// IMP=0x00100000000388f1
- (void)logMarkedPurgeableAtPath:(id)arg1;	// IMP=0x0010000000038878
- (void)logJournalCount:(unsigned long long)arg1;	// IMP=0x00100000000387d6
- (void)logArchiveCount:(unsigned long long)arg1;	// IMP=0x0010000000038734
- (void)logJournalSize:(unsigned long long)arg1;	// IMP=0x0010000000038692
- (void)logArchiveSize:(unsigned long long)arg1;	// IMP=0x00100000000385f0
- (void)logGraphSize:(unsigned long long)arg1;	// IMP=0x001000000003854e
- (void)logSignpost:(long long)arg1 message:(id)arg2;	// IMP=0x001000000003831e
- (void)logError:(long long)arg1 message:(id)arg2;	// IMP=0x001000000003824f
- (void)logEvent:(long long)arg1 message:(id)arg2;	// IMP=0x0010000000038143
- (void)logFlag:(long long)arg1 message:(id)arg2;	// IMP=0x0010000000037fe2
- (void)logGraphVersion:(long long)arg1;	// IMP=0x0010000000037f60
- (void)logEnd;	// IMP=0x0010000000037951
- (void)logStart;	// IMP=0x0010000000037922
@property(readonly, nonatomic) double elapsedTime;
@property(readonly, nonatomic) long long archiveGeneratedCount;
@property(readonly, nonatomic) long long archiveProcessedCount;
@property(readonly, nonatomic) long long journalProcessedCount;
@property(readonly, nonatomic) long long journalItemExtractedCount;
- (long long)journalArhiveItemExtractedCount;	// IMP=0x00100000000377f0
@property(readonly, nonatomic) long long journalQueryItemExtractedCount;
@property(readonly, nonatomic) long long archiveItemExtractedCount;
@property(readonly, nonatomic) long long queryItemExtractedCount;
@property(readonly, nonatomic) long long currentJournalCount;
@property(readonly, nonatomic) long long currentArchiveCount;
@property(readonly, nonatomic) long long currentJournalSize;
@property(readonly, nonatomic) long long currentArchiveSize;
@property(readonly, nonatomic) long long currentGraphSize;
@property(readonly, nonatomic) long long graphVersion;
- (id)versionName;	// IMP=0x00100000000375ff
@property(readonly, nonatomic) NSDictionary *feedbackData;
@property(readonly, nonatomic) NSDictionary *feedbackDefaults;
- (void)updateFeedback;	// IMP=0x0010000000036e7d
- (void)updateDefaults;	// IMP=0x001000000003607e
- (void)clear;	// IMP=0x0010000000035fa4
- (id)initWithVersionName:(id)arg1;	// IMP=0x0010000000035e95
- (id)init;	// IMP=0x0010000000035d9b
- (void)commonInitWithVersionName:(id)arg1 graphVersion:(id)arg2 stats:(id)arg3;	// IMP=0x001000000003566b

@end

