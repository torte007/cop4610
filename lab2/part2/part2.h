// Lab 2 - Multithreaded Programming and Synchronization
// Part 2: News Conference Multithreaded Programming
// Mark Oleson & Alexis Jefferson
// COP4610 Operating Systems

#ifndef PART2_H
#define PART2_H

int Speaker();
int Reporter(int id);
void AnswerStart();
void AnswerDone();
void EnterConferenceRoom(int id);
void LeaveConferenceRoom(int id);
void QuestionStart(int id);
void QuestionDone(int id);

void SpeakerThread(void *args);
void ReporterThread(void *args);

#endif
