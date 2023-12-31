//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowserController, NSMutableArray, NSOutputStream, NSString;
@protocol PageLoadTestRunnerDelegate;

__attribute__((visibility("hidden")))
@interface PageLoadTestRunner : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _loadURLInNewTab;	// 9 = 0x9
    _Bool _measureTime;	// 10 = 0xa
    NSMutableArray *_pagesNeedingMemoryWarningSent;	// 16 = 0x10
    NSMutableArray *_pageLoadArray;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    double _allSubresourcesFinishedLoadingDelay;	// 40 = 0x28
    double _savedDefaultTimeoutInterval;	// 48 = 0x30
    unsigned int _currentTestIteration;	// 56 = 0x38
    unsigned int _testIterations;	// 60 = 0x3c
    double _initialDelay;	// 64 = 0x40
    NSOutputStream *_logStream;	// 72 = 0x48
    _Bool _disableProgressBar;	// 80 = 0x50
    _Bool _failFast;	// 81 = 0x51
    _Bool _resetsZoomBetweenPages;	// 82 = 0x52
    _Bool _collectHeapStatistics;	// 83 = 0x53
    _Bool _checkForWorldLeaks;	// 84 = 0x54
    int _cacheClearDirective;	// 88 = 0x58
    NSString *_testName;	// 96 = 0x60
    NSString *_logFile;	// 104 = 0x68
    NSString *_outputFilename;	// 112 = 0x70
    NSString *_suiteName;	// 120 = 0x78
    unsigned long long _skipCount;	// 128 = 0x80
    double _pageTimeout;	// 136 = 0x88
    double _pageActionInterval;	// 144 = 0x90
    double _pageRestInterval;	// 152 = 0x98
    id <PageLoadTestRunnerDelegate> _delegate;	// 160 = 0xa0
    unsigned long long _tabCount;	// 168 = 0xa8
    BrowserController *_browserController;	// 176 = 0xb0
}

+ (CDStruct_81cc75c8)heapStatistics;	// IMP=0x00600000000ccd64
+ (id)worldLeaksString;	// IMP=0x00600000000ccaea
+ (_Bool)closingBrowserWindowsForWorldLeakTest;	// IMP=0x00600000000ccadc
+ (void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3;	// IMP=0x00600000000cca30
- (void).cxx_destruct;	// IMP=0x00000000000ccfba
@property(readonly, nonatomic) BrowserController *browserController; // @synthesize browserController=_browserController;
@property(nonatomic) _Bool loadURLInNewTab; // @synthesize loadURLInNewTab=_loadURLInNewTab;
@property(nonatomic) unsigned long long tabCount; // @synthesize tabCount=_tabCount;
@property(nonatomic) __weak id <PageLoadTestRunnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool checkForWorldLeaks; // @synthesize checkForWorldLeaks=_checkForWorldLeaks;
@property(nonatomic) _Bool collectHeapStatistics; // @synthesize collectHeapStatistics=_collectHeapStatistics;
@property(nonatomic) int cacheClearDirective; // @synthesize cacheClearDirective=_cacheClearDirective;
@property(nonatomic) double pageRestInterval; // @synthesize pageRestInterval=_pageRestInterval;
@property(nonatomic) double pageActionInterval; // @synthesize pageActionInterval=_pageActionInterval;
@property(nonatomic) double pageTimeout; // @synthesize pageTimeout=_pageTimeout;
@property(nonatomic) _Bool resetsZoomBetweenPages; // @synthesize resetsZoomBetweenPages=_resetsZoomBetweenPages;
@property(nonatomic) _Bool failFast; // @synthesize failFast=_failFast;
@property(nonatomic) _Bool disableProgressBar; // @synthesize disableProgressBar=_disableProgressBar;
@property(nonatomic) unsigned long long skipCount; // @synthesize skipCount=_skipCount;
@property(retain, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(retain, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(retain, nonatomic) NSString *logFile; // @synthesize logFile=_logFile;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (_Bool)checkForWorldLeaksNow;	// IMP=0x00000000000ccd29
- (void)checkForWorldLeaksSoon;	// IMP=0x00000000000ccd03
- (void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;	// IMP=0x00000000000cccb9
- (_Bool)finishCheckingForWorldLeaks;	// IMP=0x00000000000ccc7e
- (void)closeBrowserWindows;	// IMP=0x00000000000ccae4
- (void)clearCacheWithURL:(id)arg1;	// IMP=0x00000000000cc9d9
- (void)log:(id)arg1;	// IMP=0x00000000000cc853
- (void)finishedTestPage:(id)arg1;	// IMP=0x00000000000cc7ba
- (void)startingTestPage:(id)arg1;	// IMP=0x00000000000cc779
- (void)finishedTestRunner;	// IMP=0x00000000000cc71b
- (void)finishedTestRunnerIteration;	// IMP=0x00000000000cc6f7
- (void)startingTestRunner;	// IMP=0x00000000000cc6dc
- (void)_handleActionTimer:(id)arg1;	// IMP=0x00000000000cc610
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x00000000000cc608
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000000000cc4bd
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;	// IMP=0x00000000000cc218
- (void)_updatePageLoad:(id)arg1 stats:(id)arg2;	// IMP=0x00000000000cbcb2
- (void)_checkRedirect:(id)arg1;	// IMP=0x00000000000cbbbe
- (void)_pageRestExpired:(id)arg1;	// IMP=0x00000000000cbb49
- (void)_pageTimeoutExpired:(id)arg1;	// IMP=0x00000000000cb9fa
- (id)_pageLoadForTabDocument:(id)arg1;	// IMP=0x00000000000cb872
- (void)finish;	// IMP=0x00000000000cb5f3
- (void)_startNextPageNow;	// IMP=0x00000000000cad32
- (void)startNextPage;	// IMP=0x00000000000cacd1
- (void)start;	// IMP=0x00000000000ca3d0
- (_Bool)loadTestSuiteFile:(id)arg1;	// IMP=0x00000000000c96b3
- (void)removeURLsInRange:(struct _NSRange)arg1;	// IMP=0x00000000000c95d2
- (void)addPageURL:(id)arg1 withProcessSwap:(_Bool)arg2;	// IMP=0x00000000000c94e8
- (void)setTestOptions:(id)arg1;	// IMP=0x00000000000c9131
- (void)setExistingProperty:(id)arg1 to:(id)arg2;	// IMP=0x00000000000c9020
- (void)_closeLogStream;	// IMP=0x00000000000c8fe2
- (void)dealloc;	// IMP=0x00000000000c8fa4
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000000c8e47

@end

