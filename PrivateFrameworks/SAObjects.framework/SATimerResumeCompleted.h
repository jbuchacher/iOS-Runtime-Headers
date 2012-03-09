/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SATimerObject;

@interface SATimerResumeCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SATimerObject * timer;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)resumeCompleted;
+ (id)resumeCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setTimer:(id)arg1;
- (id)timer;
- (id)encodedClassName;

@end